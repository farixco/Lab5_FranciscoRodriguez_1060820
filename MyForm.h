#pragma once
#include "Mazo.h"
namespace Lab5FranciscoRodriguez1060820 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ListBox^ lbxDestino;
	private: System::Windows::Forms::ListBox^ lbxOrigen;
	private: System::Windows::Forms::Button^ btnMover;








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblBarajar;
	private: System::Windows::Forms::Label^ lblDificultad;
	private: System::Windows::Forms::ListBox^ lbxDificultad;
	private: System::Windows::Forms::Label^ lblDestino;
	private: System::Windows::Forms::Label^ lblOrigen;
	private: System::Windows::Forms::Label^ lblEntrada;
	private: System::Windows::Forms::TextBox^ txtIndice;
	private: System::Windows::Forms::Button^ btnBarajar;
	private: System::Windows::Forms::ListBox^ lbxG7;
	private: System::Windows::Forms::ListBox^ lbxG6;
	private: System::Windows::Forms::ListBox^ lbxG5;
	private: System::Windows::Forms::ListBox^ lbxG4;
	private: System::Windows::Forms::ListBox^ lbxG3;
	private: System::Windows::Forms::ListBox^ lbxG2;
	private: System::Windows::Forms::ListBox^ lbxG1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnBarajar = (gcnew System::Windows::Forms::Button());
			this->lblBarajar = (gcnew System::Windows::Forms::Label());
			this->lblDificultad = (gcnew System::Windows::Forms::Label());
			this->lbxDificultad = (gcnew System::Windows::Forms::ListBox());
			this->lblDestino = (gcnew System::Windows::Forms::Label());
			this->lblOrigen = (gcnew System::Windows::Forms::Label());
			this->lblEntrada = (gcnew System::Windows::Forms::Label());
			this->txtIndice = (gcnew System::Windows::Forms::TextBox());
			this->lbxDestino = (gcnew System::Windows::Forms::ListBox());
			this->lbxOrigen = (gcnew System::Windows::Forms::ListBox());
			this->btnMover = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lbxG1 = (gcnew System::Windows::Forms::ListBox());
			this->lbxG2 = (gcnew System::Windows::Forms::ListBox());
			this->lbxG3 = (gcnew System::Windows::Forms::ListBox());
			this->lbxG4 = (gcnew System::Windows::Forms::ListBox());
			this->lbxG5 = (gcnew System::Windows::Forms::ListBox());
			this->lbxG6 = (gcnew System::Windows::Forms::ListBox());
			this->lbxG7 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(784, 575);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(776, 549);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ejercicio 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->lbxG7);
			this->tabPage2->Controls->Add(this->lbxG6);
			this->tabPage2->Controls->Add(this->lbxG5);
			this->tabPage2->Controls->Add(this->lbxG4);
			this->tabPage2->Controls->Add(this->lbxG3);
			this->tabPage2->Controls->Add(this->lbxG2);
			this->tabPage2->Controls->Add(this->lbxG1);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->btnBarajar);
			this->tabPage2->Controls->Add(this->lblBarajar);
			this->tabPage2->Controls->Add(this->lblDificultad);
			this->tabPage2->Controls->Add(this->lbxDificultad);
			this->tabPage2->Controls->Add(this->lblDestino);
			this->tabPage2->Controls->Add(this->lblOrigen);
			this->tabPage2->Controls->Add(this->lblEntrada);
			this->tabPage2->Controls->Add(this->txtIndice);
			this->tabPage2->Controls->Add(this->lbxDestino);
			this->tabPage2->Controls->Add(this->lbxOrigen);
			this->tabPage2->Controls->Add(this->btnMover);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(776, 549);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ejercicio 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnBarajar
			// 
			this->btnBarajar->Location = System::Drawing::Point(350, 140);
			this->btnBarajar->Name = L"btnBarajar";
			this->btnBarajar->Size = System::Drawing::Size(75, 23);
			this->btnBarajar->TabIndex = 19;
			this->btnBarajar->Text = L"Barajar";
			this->btnBarajar->UseVisualStyleBackColor = true;
			this->btnBarajar->Visible = false;
			this->btnBarajar->Click += gcnew System::EventHandler(this, &MyForm::btnBarajar_Click);
			// 
			// lblBarajar
			// 
			this->lblBarajar->AutoSize = true;
			this->lblBarajar->Location = System::Drawing::Point(315, 166);
			this->lblBarajar->Name = L"lblBarajar";
			this->lblBarajar->Size = System::Drawing::Size(160, 13);
			this->lblBarajar->TabIndex = 18;
			this->lblBarajar->Text = L"Presione R para barajar el mazo.";
			// 
			// lblDificultad
			// 
			this->lblDificultad->AutoSize = true;
			this->lblDificultad->Location = System::Drawing::Point(647, 73);
			this->lblDificultad->Name = L"lblDificultad";
			this->lblDificultad->Size = System::Drawing::Size(74, 13);
			this->lblDificultad->TabIndex = 17;
			this->lblDificultad->Text = L"Elija dificultad:";
			// 
			// lbxDificultad
			// 
			this->lbxDificultad->FormattingEnabled = true;
			this->lbxDificultad->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Facil", L"Medio", L"Dificil" });
			this->lbxDificultad->Location = System::Drawing::Point(650, 93);
			this->lbxDificultad->Name = L"lbxDificultad";
			this->lbxDificultad->Size = System::Drawing::Size(120, 95);
			this->lbxDificultad->TabIndex = 16;
			this->lbxDificultad->Visible = false;
			// 
			// lblDestino
			// 
			this->lblDestino->AutoSize = true;
			this->lblDestino->Location = System::Drawing::Point(171, 22);
			this->lblDestino->Name = L"lblDestino";
			this->lblDestino->Size = System::Drawing::Size(43, 13);
			this->lblDestino->TabIndex = 15;
			this->lblDestino->Text = L"Destino";
			this->lblDestino->Visible = false;
			// 
			// lblOrigen
			// 
			this->lblOrigen->AutoSize = true;
			this->lblOrigen->Location = System::Drawing::Point(90, 22);
			this->lblOrigen->Name = L"lblOrigen";
			this->lblOrigen->Size = System::Drawing::Size(38, 13);
			this->lblOrigen->TabIndex = 14;
			this->lblOrigen->Text = L"Origen";
			this->lblOrigen->Visible = false;
			// 
			// lblEntrada
			// 
			this->lblEntrada->AutoSize = true;
			this->lblEntrada->Location = System::Drawing::Point(252, 40);
			this->lblEntrada->Name = L"lblEntrada";
			this->lblEntrada->Size = System::Drawing::Size(164, 26);
			this->lblEntrada->TabIndex = 13;
			this->lblEntrada->Text = L"Ingrese posicion de carta a tomar\r\n desde arriba hasta abajo";
			this->lblEntrada->Visible = false;
			// 
			// txtIndice
			// 
			this->txtIndice->Location = System::Drawing::Point(252, 70);
			this->txtIndice->Name = L"txtIndice";
			this->txtIndice->Size = System::Drawing::Size(100, 20);
			this->txtIndice->TabIndex = 12;
			this->txtIndice->Visible = false;
			// 
			// lbxDestino
			// 
			this->lbxDestino->FormattingEnabled = true;
			this->lbxDestino->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"G1", L"G2", L"G3", L"G4", L"G5", L"G6", L"G7" });
			this->lbxDestino->Location = System::Drawing::Point(171, 41);
			this->lbxDestino->Name = L"lbxDestino";
			this->lbxDestino->Size = System::Drawing::Size(75, 147);
			this->lbxDestino->TabIndex = 11;
			this->lbxDestino->Visible = false;
			// 
			// lbxOrigen
			// 
			this->lbxOrigen->FormattingEnabled = true;
			this->lbxOrigen->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"G1", L"G2", L"G3", L"G4", L"G5", L"G6", L"G7" });
			this->lbxOrigen->Location = System::Drawing::Point(90, 41);
			this->lbxOrigen->Name = L"lbxOrigen";
			this->lbxOrigen->Size = System::Drawing::Size(75, 147);
			this->lbxOrigen->TabIndex = 10;
			this->lbxOrigen->Visible = false;
			// 
			// btnMover
			// 
			this->btnMover->Location = System::Drawing::Point(9, 40);
			this->btnMover->Name = L"btnMover";
			this->btnMover->Size = System::Drawing::Size(75, 23);
			this->btnMover->TabIndex = 9;
			this->btnMover->Text = L"Mover";
			this->btnMover->UseVisualStyleBackColor = true;
			this->btnMover->Visible = false;
			this->btnMover->Click += gcnew System::EventHandler(this, &MyForm::btnMover_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Solitario Simple";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(90, 259);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"G1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(193, 259);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"G2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(297, 259);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"G3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(395, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"G4";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(478, 259);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"G5";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(556, 259);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"G6";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(647, 259);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 13);
			this->label8->TabIndex = 26;
			this->label8->Text = L"G7";
			// 
			// lbxG1
			// 
			this->lbxG1->FormattingEnabled = true;
			this->lbxG1->Location = System::Drawing::Point(72, 302);
			this->lbxG1->Name = L"lbxG1";
			this->lbxG1->Size = System::Drawing::Size(56, 186);
			this->lbxG1->TabIndex = 27;
			// 
			// lbxG2
			// 
			this->lbxG2->FormattingEnabled = true;
			this->lbxG2->Location = System::Drawing::Point(174, 302);
			this->lbxG2->Name = L"lbxG2";
			this->lbxG2->Size = System::Drawing::Size(56, 186);
			this->lbxG2->TabIndex = 28;
			// 
			// lbxG3
			// 
			this->lbxG3->FormattingEnabled = true;
			this->lbxG3->Location = System::Drawing::Point(278, 302);
			this->lbxG3->Name = L"lbxG3";
			this->lbxG3->Size = System::Drawing::Size(56, 186);
			this->lbxG3->TabIndex = 29;
			// 
			// lbxG4
			// 
			this->lbxG4->FormattingEnabled = true;
			this->lbxG4->Location = System::Drawing::Point(378, 302);
			this->lbxG4->Name = L"lbxG4";
			this->lbxG4->Size = System::Drawing::Size(56, 186);
			this->lbxG4->TabIndex = 30;
			// 
			// lbxG5
			// 
			this->lbxG5->FormattingEnabled = true;
			this->lbxG5->Location = System::Drawing::Point(462, 302);
			this->lbxG5->Name = L"lbxG5";
			this->lbxG5->Size = System::Drawing::Size(56, 186);
			this->lbxG5->TabIndex = 31;
			// 
			// lbxG6
			// 
			this->lbxG6->FormattingEnabled = true;
			this->lbxG6->Location = System::Drawing::Point(541, 302);
			this->lbxG6->Name = L"lbxG6";
			this->lbxG6->Size = System::Drawing::Size(56, 186);
			this->lbxG6->TabIndex = 32;
			// 
			// lbxG7
			// 
			this->lbxG7->FormattingEnabled = true;
			this->lbxG7->Location = System::Drawing::Point(628, 302);
			this->lbxG7->Name = L"lbxG7";
			this->lbxG7->Size = System::Drawing::Size(56, 186);
			this->lbxG7->TabIndex = 33;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 591);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Mazo* juego = new Mazo;
	private: System::Void btnMover_Click(System::Object^ sender, System::EventArgs^ e) {
		bool valido = true;
		int inxOrg = lbxOrigen->SelectedIndex;
		int inxDst = lbxDestino->SelectedIndex;
		int diff;
		switch (lbxDificultad->SelectedIndex)
		{
		case 0: diff = 3;
		case 1: diff = 5;
		case 2: diff = 7;
		default:
			diff = -1;
			valido = false;
			break;
		}
		int pos;
		try {
			pos = Convert::ToInt32(txtIndice->Text);
		}
		catch (Exception^ a) {
			MessageBox::Show("Indice no valido");
			valido = false;
		}
		if (valido) {
			juego->Mover(pos, inxOrg, inxDst);
			if (juego->Ganancia(diff)) {
				MessageBox::Show("Enhorabuena! Ha ganado el juego!");
			}
		}
	}
private: System::Void btnBarajar_Click(System::Object^ sender, System::EventArgs^ e) {
	juego->Barajar();
	lblBarajar->Visible = false;
	lblDestino->Visible = true;
	lblOrigen->Visible = true;
	lblEntrada->Visible = true;
	lblDificultad->Visible = true;
	lbxDestino->Visible = true;
	lbxDificultad->Visible = true;
	lbxOrigen->Visible = true;
	txtIndice->Visible = true;
	btnMover->Visible = true;
}
};
}
