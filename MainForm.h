#pragma once
#include "AddForm.h" 

namespace BookShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dgvBooks;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->dgvBooks = (gcnew System::Windows::Forms::DataGridView());
			   this->btnAdd = (gcnew System::Windows::Forms::Button());
			   this->btnRefresh = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBooks))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // dgvBooks
			   // 
			   this->dgvBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dgvBooks->Location = System::Drawing::Point(12, 12);
			   this->dgvBooks->Name = L"dgvBooks";
			   this->dgvBooks->RowHeadersWidth = 51;
			   this->dgvBooks->Size = System::Drawing::Size(649, 450);
			   this->dgvBooks->TabIndex = 0;
			   // 
			   // btnAdd
			   // 
			   this->btnAdd->Location = System::Drawing::Point(100, 480);
			   this->btnAdd->Name = L"btnAdd";
			   this->btnAdd->Size = System::Drawing::Size(150, 40);
			   this->btnAdd->Text = L"Додати книгу";
			   this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			   // 
			   // btnRefresh
			   // 
			   this->btnRefresh->Location = System::Drawing::Point(400, 480);
			   this->btnRefresh->Name = L"btnRefresh";
			   this->btnRefresh->Size = System::Drawing::Size(150, 40);
			   this->btnRefresh->Text = L"Оновити";
			   this->btnRefresh->Click += gcnew System::EventHandler(this, &MyForm::btnRefresh_Click);
			   // 
			   // MyForm
			   // 
			   this->ClientSize = System::Drawing::Size(673, 557);
			   this->Controls->Add(this->btnRefresh);
			   this->Controls->Add(this->btnAdd);
			   this->Controls->Add(this->dgvBooks);
			   this->Name = L"MyForm";
			   this->Text = L"Книжковий магазин";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBooks))->EndInit();
			   this->ResumeLayout(false);
		   }
#pragma endregion

		   

		   // Функція завантаження даних
		   void RefreshGrid() {
			   try {
				   String^ connString = "Server=localhost;Database=bookstore_db;Uid=root;Pwd=root;CharSet=utf8;";
				   
				   MySqlConnection^ conn = gcnew MySqlConnection(connString);
				   MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM books", conn);
				   DataTable^ dt = gcnew DataTable();
				   adapter->Fill(dt);
				   dgvBooks->DataSource = dt;
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Помилка бази: " + ex->Message);
			   }
		   }

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshGrid(); // Завантажити дані при старті
	}

	private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
		RefreshGrid(); // Оновити вручну
	}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		AddForm^ addFrm = gcnew AddForm();
		addFrm->ShowDialog(); // Відкрити вікно додавання
		RefreshGrid();        // Оновити таблицю після закриття вікна
	}
	};
}