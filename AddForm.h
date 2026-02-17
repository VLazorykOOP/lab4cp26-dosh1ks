#pragma once

namespace BookShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AddForm : public System::Windows::Forms::Form
	{
	public:
		AddForm(void)
		{
			InitializeComponent();
		}

	protected:
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ txtAuthor1;
	private: System::Windows::Forms::Label^ txtName;
	private: System::Windows::Forms::Label^ txtPrice1;
	private: System::Windows::Forms::Label^ txtGenre1;
	private: System::Windows::Forms::Label^ txtPage1;
	private: System::Windows::Forms::Label^ txtPublisher1;

	private: System::Windows::Forms::TextBox^ txtAuthor;
	private: System::Windows::Forms::TextBox^ txtTitle;
	private: System::Windows::Forms::TextBox^ txtPublisher;
	private: System::Windows::Forms::TextBox^ txtPages;
	private: System::Windows::Forms::TextBox^ txtGenre;
	private: System::Windows::Forms::TextBox^ txtPrice;

	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnCancel;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->txtAuthor1 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::Label());
			this->txtPrice1 = (gcnew System::Windows::Forms::Label());
			this->txtGenre1 = (gcnew System::Windows::Forms::Label());
			this->txtPage1 = (gcnew System::Windows::Forms::Label());
			this->txtPublisher1 = (gcnew System::Windows::Forms::Label());
			this->txtAuthor = (gcnew System::Windows::Forms::TextBox());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->txtPublisher = (gcnew System::Windows::Forms::TextBox());
			this->txtPages = (gcnew System::Windows::Forms::TextBox());
			this->txtGenre = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtAuthor1 (Label)
			// 
			this->txtAuthor1->AutoSize = true;
			this->txtAuthor1->Location = System::Drawing::Point(30, 40);
			this->txtAuthor1->Name = L"txtAuthor1";
			this->txtAuthor1->Size = System::Drawing::Size(47, 16);
			this->txtAuthor1->Text = L"Автор";
			// 
			// txtName (Label)
			// 
			this->txtName->AutoSize = true;
			this->txtName->Location = System::Drawing::Point(30, 78);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(49, 16);
			this->txtName->Text = L"Назва";
			// 
			// txtPrice1 (Label)
			// 
			this->txtPrice1->AutoSize = true;
			this->txtPrice1->Location = System::Drawing::Point(30, 242);
			this->txtPrice1->Name = L"txtPrice1";
			this->txtPrice1->Size = System::Drawing::Size(35, 16);
			this->txtPrice1->Text = L"Ціна";
			// 
			// txtGenre1 (Label)
			// 
			this->txtGenre1->AutoSize = true;
			this->txtGenre1->Location = System::Drawing::Point(30, 202);
			this->txtGenre1->Name = L"txtGenre1";
			this->txtGenre1->Size = System::Drawing::Size(44, 16);
			this->txtGenre1->Text = L"Жанр";
			// 
			// txtPage1 (Label)
			// 
			this->txtPage1->AutoSize = true;
			this->txtPage1->Location = System::Drawing::Point(30, 160);
			this->txtPage1->Name = L"txtPage1";
			this->txtPage1->Size = System::Drawing::Size(65, 16);
			this->txtPage1->Text = L"Сторінок";
			// 
			// txtPublisher1 (Label)
			// 
			this->txtPublisher1->AutoSize = true;
			this->txtPublisher1->Location = System::Drawing::Point(30, 119);
			this->txtPublisher1->Name = L"txtPublisher1";
			this->txtPublisher1->Size = System::Drawing::Size(95, 16);
			this->txtPublisher1->Text = L"Видавництво";
			// 
			// txtAuthor (TextBox)
			// 
			this->txtAuthor->Location = System::Drawing::Point(182, 33);
			this->txtAuthor->Name = L"txtAuthor";
			this->txtAuthor->Size = System::Drawing::Size(100, 22);
			// 
			// txtTitle (TextBox)
			// 
			this->txtTitle->Location = System::Drawing::Point(182, 78);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(100, 22);
			// 
			// txtPublisher (TextBox)
			// 
			this->txtPublisher->Location = System::Drawing::Point(182, 119);
			this->txtPublisher->Name = L"txtPublisher";
			this->txtPublisher->Size = System::Drawing::Size(100, 22);
			// 
			// txtPages (TextBox)
			// 
			this->txtPages->Location = System::Drawing::Point(182, 160);
			this->txtPages->Name = L"txtPages";
			this->txtPages->Size = System::Drawing::Size(100, 22);
			// 
			// txtGenre (TextBox)
			// 
			this->txtGenre->Location = System::Drawing::Point(182, 202);
			this->txtGenre->Name = L"txtGenre";
			this->txtGenre->Size = System::Drawing::Size(100, 22);
			// 
			// txtPrice (TextBox)
			// 
			this->txtPrice->Location = System::Drawing::Point(182, 239);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(100, 22);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(33, 301);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(75, 23);
			this->btnSave->Text = L"Save";
			this->btnSave->Click += gcnew System::EventHandler(this, &AddForm::btnSave_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(182, 301);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddForm::btnCancel_Click);
			// 
			// AddForm
			// 
			this->ClientSize = System::Drawing::Size(317, 365);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->txtGenre);
			this->Controls->Add(this->txtPages);
			this->Controls->Add(this->txtPublisher);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->txtAuthor);
			this->Controls->Add(this->txtPublisher1);
			this->Controls->Add(this->txtPage1);
			this->Controls->Add(this->txtGenre1);
			this->Controls->Add(this->txtPrice1);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtAuthor1);
			this->Name = L"AddForm";
			this->Text = L"Додати книгу";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Рядок підключення 
			
			String^ connString = "Server=localhost;Database=bookstore_db;Uid=root;Pwd=root;CharSet=utf8;";
			MySql::Data::MySqlClient::MySqlConnection^ conn = gcnew MySql::Data::MySqlClient::MySqlConnection(connString);

			String^ sql = "INSERT INTO books (author, title, publisher, pages, genre, price) VALUES (@auth, @tit, @pub, @pag, @gen, @pri)";
			MySql::Data::MySqlClient::MySqlCommand^ cmd = gcnew MySql::Data::MySqlClient::MySqlCommand(sql, conn);

			cmd->Parameters->AddWithValue("@auth", txtAuthor->Text);
			cmd->Parameters->AddWithValue("@tit", txtTitle->Text);
			cmd->Parameters->AddWithValue("@pub", txtPublisher->Text);
			cmd->Parameters->AddWithValue("@pag", System::Convert::ToInt32(txtPages->Text));
			cmd->Parameters->AddWithValue("@gen", txtGenre->Text);
			cmd->Parameters->AddWithValue("@pri", System::Convert::ToDouble(txtPrice->Text));

			conn->Open();
			cmd->ExecuteNonQuery();
			conn->Close();

			System::Windows::Forms::MessageBox::Show("Книгу додано успішно!", "Успіх");
			this->Close();
		}
		catch (System::Exception^ ex) {
			System::Windows::Forms::MessageBox::Show("Помилка: " + ex->Message, "Помилка");
		}
	}

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
