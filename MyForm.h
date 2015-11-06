#pragma once

namespace FilesTesting {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; // Libreria Archivos

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label4;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(260, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Enviar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Digite el nombre de alguien";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(154, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(16, 175);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(388, 147);
			this->listBox1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Digite el codigo de alguien";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(154, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Buscar por nombre";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(29, 120);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(36, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(234, 120);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(106, 20);
			this->textBox4->TabIndex = 10;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(244, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Encontrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(241, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Buscar por codigo";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(416, 345);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		///Subrutina Agregar Registro
		//asdadadadasdadasddsa//
		//asdadadadasdadasddsa//
		//asdadadadasdadasddsa//
		//asdadadadasdadasddsa//
		void NuevaPersona(String^RutaDelArchivo, String^Nombre, String^Codigo)
		{
			listBox1->Items->Clear();
			//Como vamos a guardar registros, lo abriremos en modo lectura (Modificar). que para el lenguaje sera StreamWriter
			StreamWriter^Archivo = gcnew StreamWriter(RutaDelArchivo, true);
			Archivo->WriteLine(Nombre + "," + Codigo); //2 campos, nombre y codigo.
			//Ahora procedemos a cerrar el archivo, para guardar los cambios.
			Archivo->Close();
		}
		//asdadadadasdadasddsa//
		//asdadadadasdadasddsa//
		//asdadadadasdadasddsa//
		//Subrutina Agregar datos del registro al listbox
		void MostrarRegistro(String^RutaDelArchivo)
		{
			listBox1->Items->Clear();
			//Ahora, utilizaremos StreamReader para abrir en modo lectura (Entrada), ya que escribiremos sus registros
			StreamReader^Archivo2 = gcnew StreamReader(RutaDelArchivo);
			//Le asignamos el dato del primer registro a nuestra variable para mostrarlo
			String^ValorAMostrar = "";
			//Puesto que mostraremos todo el registro, no sabemos cuantos registros hay guardados. Asi que validaremos que se muestren...
			//..Hasta que se llegue a la ultima linea.
			while (Archivo2->Peek() != -1)
			{
				String^ValorAMostrar = Archivo2->ReadLine();
				listBox1->Items->Add(ValorAMostrar);
			}
			Archivo2->Close();
			//Habra casos donde ya el registro este dado con los campos utilizados. Normalmente, la primera linea tendra la categoria...
			//..O nombre de lo que se guardara ahi. En dicho caso, se usa esa instruccion una segunda vez, para iniciar desde la..
			//..Segunda linea, pues contiene el registro con informacion que necesitamos.

		}
		//asdadadadasdadasddsa//
		//asdadadadasdadasddsa//
		//asdadadadasdadasddsa//
		//Subrutina buscar por nombre
		void BuscarPorNombre(String^RutaDelArchivo, String^ Nombre)
		{
			listBox1->Items->Clear();
			//Inicialmente abriremos el archivo en modo lectura (entrada) para pasar sus datos a vectores.
			//Sabemos que cada campo esta separado por ",", asi que usaremos la funcion Split para separarlos.
			StreamReader^ Archivo4 = gcnew StreamReader(RutaDelArchivo);
			String^ Nombres = "";
			String^ Nombres2 = "";
			String^CodigoPersona = "";
			bool RegistroEncontrado = false;
			//Recorreremos el archivo, separando cada dato de la linea del registro.
			while ((Archivo4->Peek() != -1) && (RegistroEncontrado == false))
			{
				//La funcion split nos separara por cada "," un valor en un espacio del vector
				Nombres = Archivo4->ReadLine();
				Nombres2 = Nombres->Split(',')[0];
				CodigoPersona = Nombres->Split(',')[1];
				if (Nombre->Equals(Nombres2))
				{
					listBox1->Items->Add(Nombres2 + "," + CodigoPersona);
					RegistroEncontrado = true;
				}
			}
			Archivo4->Close();
			if (RegistroEncontrado == false)
			{
				MessageBox::Show("Este nombre no existe");
			}
			else
			{
				MessageBox::Show("Persona encontrada! Agregado al listbox.");
			}
		}


		//asdadadadasdadasddsa//
		//asdadadadasdadasddsa//
		//asdadadadasdadasddsa//
		//Subrutina buscar por codigo
		void BuscarPorCodigo(String^RutaDelArchivo, String^ Codigo)
		{
			listBox1->Items->Clear();
			//Inicialmente abriremos el archivo en modo lectura (entrada) para pasar sus datos a vectores.
			//Sabemos que cada campo esta separado por ",", asi que usaremos la funcion Split para separarlos.
			StreamReader^ Archivo3 = gcnew StreamReader(RutaDelArchivo);
			String^ Codigos = "";
			String^ Codigos2 = "";
			String^NombrePersona = "";
			bool RegistroEncontrado = false;
			while ((Archivo3->Peek() != -1) && (RegistroEncontrado==false))
			{
				//La funcion split nos separara por cada "," un valor en un espacio del vector
				Codigos = Archivo3->ReadLine();
				NombrePersona = Codigos->Split(',')[0];
				Codigos2 = Codigos->Split(',')[1];
				if (Codigo->Equals(Codigos2))
				{
					listBox1->Items->Add(NombrePersona + "," + Codigos2);
					RegistroEncontrado = true;
				}
			}
			Archivo3->Close();
			if (RegistroEncontrado == false)
			{
				MessageBox::Show("Este codigo no pertenece a nadie");
			}
			else
			{
				MessageBox::Show("Persona encontrada! Agregado al listbox.");
			}
		}


	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^NombrePersona = textBox1->Text;
			 String^CodigoPersona = textBox2->Text;
			 if ((NombrePersona->Length <= 0) || (CodigoPersona->Length <= 0))
			 {
				 MessageBox::Show("Debes llenar todos los campos!!");
			 }else{				 
				 //Ejecutamos la funcion, donde recibira como parametros la ruta (Que debe ser especificada en comillas, ya que sera nuestro....
				 //...Nombre del archivo.
				 NuevaPersona("Nombres.txt", NombrePersona, CodigoPersona);
				 //Ejecutamos la funcion que mostrara el registro
				 MostrarRegistro("Nombres.txt");
			 }
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^PersonaAbuscar = textBox3->Text;
			 if (textBox3->Text->Length <= 0)
			 {
				 MessageBox::Show("No puedes dejar el campo en blanco");
			 }
			 else
			 {
				 BuscarPorNombre("Nombres.txt", PersonaAbuscar);
			 }
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ PersonaABuscar2 = textBox4->Text;
				 if (textBox4->Text->Length <= 0)
				 {
					 MessageBox::Show("No puede dejar este campo vacio");
				 }
				 else
				 {
					 BuscarPorCodigo("Nombres.txt", PersonaABuscar2);
				 }
}
};
}
