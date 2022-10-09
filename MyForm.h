#pragma once
#include "Mazo.h"
#include "List.h"
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
	private: System::Windows::Forms::Label^ lblMazo;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnDescMaz;
	private: System::Windows::Forms::TextBox^ txtLastIndexOf;
	private: System::Windows::Forms::TextBox^ txtSetItemItem;
	private: System::Windows::Forms::TextBox^ txtSetItemIndex;
	private: System::Windows::Forms::TextBox^ txtGetItem;
	private: System::Windows::Forms::TextBox^ txtInsertItem;
	private: System::Windows::Forms::TextBox^ txtInsertIndex;
	private: System::Windows::Forms::TextBox^ txtIndexOf;
	private: System::Windows::Forms::TextBox^ txtContains;
	private: System::Windows::Forms::TextBox^ txtAdd;
	private: System::Windows::Forms::Button^ btnRemoveAt;
	private: System::Windows::Forms::Button^ btnRemove;
	private: System::Windows::Forms::Button^ btnLastIndexOf;
	private: System::Windows::Forms::Button^ btnSetItem;
	private: System::Windows::Forms::Button^ btnGetItem;
	private: System::Windows::Forms::Button^ btnInsert;
	private: System::Windows::Forms::Button^ btnIndexOf;
	private: System::Windows::Forms::Button^ btnContains;
	private: System::Windows::Forms::Button^ btnCount;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ListBox^ lbxLista;
	private: System::Windows::Forms::TextBox^ txtRemoveAt;
	private: System::Windows::Forms::TextBox^ txtRemove;
	private: System::Windows::Forms::Label^ lblCount;
	private: System::Windows::Forms::Label^ lblContains;
	private: System::Windows::Forms::Label^ lblIndexOf;

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
			this->lblIndexOf = (gcnew System::Windows::Forms::Label());
			this->lblContains = (gcnew System::Windows::Forms::Label());
			this->lblCount = (gcnew System::Windows::Forms::Label());
			this->lbxLista = (gcnew System::Windows::Forms::ListBox());
			this->txtRemoveAt = (gcnew System::Windows::Forms::TextBox());
			this->txtRemove = (gcnew System::Windows::Forms::TextBox());
			this->txtLastIndexOf = (gcnew System::Windows::Forms::TextBox());
			this->txtSetItemItem = (gcnew System::Windows::Forms::TextBox());
			this->txtSetItemIndex = (gcnew System::Windows::Forms::TextBox());
			this->txtGetItem = (gcnew System::Windows::Forms::TextBox());
			this->txtInsertItem = (gcnew System::Windows::Forms::TextBox());
			this->txtInsertIndex = (gcnew System::Windows::Forms::TextBox());
			this->txtIndexOf = (gcnew System::Windows::Forms::TextBox());
			this->txtContains = (gcnew System::Windows::Forms::TextBox());
			this->txtAdd = (gcnew System::Windows::Forms::TextBox());
			this->btnRemoveAt = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnLastIndexOf = (gcnew System::Windows::Forms::Button());
			this->btnSetItem = (gcnew System::Windows::Forms::Button());
			this->btnGetItem = (gcnew System::Windows::Forms::Button());
			this->btnInsert = (gcnew System::Windows::Forms::Button());
			this->btnIndexOf = (gcnew System::Windows::Forms::Button());
			this->btnContains = (gcnew System::Windows::Forms::Button());
			this->btnCount = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnDescMaz = (gcnew System::Windows::Forms::Button());
			this->lblMazo = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lbxG7 = (gcnew System::Windows::Forms::ListBox());
			this->lbxG6 = (gcnew System::Windows::Forms::ListBox());
			this->lbxG5 = (gcnew System::Windows::Forms::ListBox());
			this->lbxG4 = (gcnew System::Windows::Forms::ListBox());
			this->lbxG3 = (gcnew System::Windows::Forms::ListBox());
			this->lbxG2 = (gcnew System::Windows::Forms::ListBox());
			this->lbxG1 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
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
			this->tabControl1->Size = System::Drawing::Size(458, 577);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->lblIndexOf);
			this->tabPage1->Controls->Add(this->lblContains);
			this->tabPage1->Controls->Add(this->lblCount);
			this->tabPage1->Controls->Add(this->lbxLista);
			this->tabPage1->Controls->Add(this->txtRemoveAt);
			this->tabPage1->Controls->Add(this->txtRemove);
			this->tabPage1->Controls->Add(this->txtLastIndexOf);
			this->tabPage1->Controls->Add(this->txtSetItemItem);
			this->tabPage1->Controls->Add(this->txtSetItemIndex);
			this->tabPage1->Controls->Add(this->txtGetItem);
			this->tabPage1->Controls->Add(this->txtInsertItem);
			this->tabPage1->Controls->Add(this->txtInsertIndex);
			this->tabPage1->Controls->Add(this->txtIndexOf);
			this->tabPage1->Controls->Add(this->txtContains);
			this->tabPage1->Controls->Add(this->txtAdd);
			this->tabPage1->Controls->Add(this->btnRemoveAt);
			this->tabPage1->Controls->Add(this->btnRemove);
			this->tabPage1->Controls->Add(this->btnLastIndexOf);
			this->tabPage1->Controls->Add(this->btnSetItem);
			this->tabPage1->Controls->Add(this->btnGetItem);
			this->tabPage1->Controls->Add(this->btnInsert);
			this->tabPage1->Controls->Add(this->btnIndexOf);
			this->tabPage1->Controls->Add(this->btnContains);
			this->tabPage1->Controls->Add(this->btnCount);
			this->tabPage1->Controls->Add(this->btnClear);
			this->tabPage1->Controls->Add(this->btnAdd);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(450, 551);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ejercicio 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// lblIndexOf
			// 
			this->lblIndexOf->AutoSize = true;
			this->lblIndexOf->Location = System::Drawing::Point(215, 195);
			this->lblIndexOf->Name = L"lblIndexOf";
			this->lblIndexOf->Size = System::Drawing::Size(10, 13);
			this->lblIndexOf->TabIndex = 36;
			this->lblIndexOf->Text = L"-";
			// 
			// lblContains
			// 
			this->lblContains->AutoSize = true;
			this->lblContains->Location = System::Drawing::Point(215, 156);
			this->lblContains->Name = L"lblContains";
			this->lblContains->Size = System::Drawing::Size(10, 13);
			this->lblContains->TabIndex = 35;
			this->lblContains->Text = L"-";
			// 
			// lblCount
			// 
			this->lblCount->AutoSize = true;
			this->lblCount->Location = System::Drawing::Point(112, 113);
			this->lblCount->Name = L"lblCount";
			this->lblCount->Size = System::Drawing::Size(10, 13);
			this->lblCount->TabIndex = 34;
			this->lblCount->Text = L"-";
			// 
			// lbxLista
			// 
			this->lbxLista->FormattingEnabled = true;
			this->lbxLista->Location = System::Drawing::Point(324, 7);
			this->lbxLista->Name = L"lbxLista";
			this->lbxLista->Size = System::Drawing::Size(120, 537);
			this->lbxLista->TabIndex = 33;
			// 
			// txtRemoveAt
			// 
			this->txtRemoveAt->Location = System::Drawing::Point(6, 422);
			this->txtRemoveAt->Name = L"txtRemoveAt";
			this->txtRemoveAt->Size = System::Drawing::Size(100, 20);
			this->txtRemoveAt->TabIndex = 32;
			// 
			// txtRemove
			// 
			this->txtRemove->Location = System::Drawing::Point(6, 383);
			this->txtRemove->Name = L"txtRemove";
			this->txtRemove->Size = System::Drawing::Size(100, 20);
			this->txtRemove->TabIndex = 31;
			// 
			// txtLastIndexOf
			// 
			this->txtLastIndexOf->Location = System::Drawing::Point(6, 341);
			this->txtLastIndexOf->Name = L"txtLastIndexOf";
			this->txtLastIndexOf->Size = System::Drawing::Size(100, 20);
			this->txtLastIndexOf->TabIndex = 30;
			// 
			// txtSetItemItem
			// 
			this->txtSetItemItem->Location = System::Drawing::Point(112, 302);
			this->txtSetItemItem->Name = L"txtSetItemItem";
			this->txtSetItemItem->Size = System::Drawing::Size(100, 20);
			this->txtSetItemItem->TabIndex = 29;
			// 
			// txtSetItemIndex
			// 
			this->txtSetItemIndex->Location = System::Drawing::Point(6, 302);
			this->txtSetItemIndex->Name = L"txtSetItemIndex";
			this->txtSetItemIndex->Size = System::Drawing::Size(100, 20);
			this->txtSetItemIndex->TabIndex = 28;
			// 
			// txtGetItem
			// 
			this->txtGetItem->Location = System::Drawing::Point(6, 263);
			this->txtGetItem->Name = L"txtGetItem";
			this->txtGetItem->Size = System::Drawing::Size(100, 20);
			this->txtGetItem->TabIndex = 27;
			// 
			// txtInsertItem
			// 
			this->txtInsertItem->Location = System::Drawing::Point(112, 224);
			this->txtInsertItem->Name = L"txtInsertItem";
			this->txtInsertItem->Size = System::Drawing::Size(100, 20);
			this->txtInsertItem->TabIndex = 26;
			// 
			// txtInsertIndex
			// 
			this->txtInsertIndex->Location = System::Drawing::Point(6, 224);
			this->txtInsertIndex->Name = L"txtInsertIndex";
			this->txtInsertIndex->Size = System::Drawing::Size(100, 20);
			this->txtInsertIndex->TabIndex = 25;
			// 
			// txtIndexOf
			// 
			this->txtIndexOf->Location = System::Drawing::Point(6, 185);
			this->txtIndexOf->Name = L"txtIndexOf";
			this->txtIndexOf->Size = System::Drawing::Size(100, 20);
			this->txtIndexOf->TabIndex = 24;
			// 
			// txtContains
			// 
			this->txtContains->Location = System::Drawing::Point(6, 146);
			this->txtContains->Name = L"txtContains";
			this->txtContains->Size = System::Drawing::Size(100, 20);
			this->txtContains->TabIndex = 23;
			// 
			// txtAdd
			// 
			this->txtAdd->Location = System::Drawing::Point(6, 23);
			this->txtAdd->Name = L"txtAdd";
			this->txtAdd->Size = System::Drawing::Size(100, 20);
			this->txtAdd->TabIndex = 22;
			// 
			// btnRemoveAt
			// 
			this->btnRemoveAt->Location = System::Drawing::Point(112, 422);
			this->btnRemoveAt->Name = L"btnRemoveAt";
			this->btnRemoveAt->Size = System::Drawing::Size(75, 23);
			this->btnRemoveAt->TabIndex = 21;
			this->btnRemoveAt->Text = L"Quitar de";
			this->btnRemoveAt->UseVisualStyleBackColor = true;
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(112, 383);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(75, 23);
			this->btnRemove->TabIndex = 20;
			this->btnRemove->Text = L"Quitar";
			this->btnRemove->UseVisualStyleBackColor = true;
			// 
			// btnLastIndexOf
			// 
			this->btnLastIndexOf->Location = System::Drawing::Point(112, 339);
			this->btnLastIndexOf->Name = L"btnLastIndexOf";
			this->btnLastIndexOf->Size = System::Drawing::Size(75, 23);
			this->btnLastIndexOf->TabIndex = 19;
			this->btnLastIndexOf->Text = L"Último de";
			this->btnLastIndexOf->UseVisualStyleBackColor = true;
			// 
			// btnSetItem
			// 
			this->btnSetItem->Location = System::Drawing::Point(218, 302);
			this->btnSetItem->Name = L"btnSetItem";
			this->btnSetItem->Size = System::Drawing::Size(75, 23);
			this->btnSetItem->TabIndex = 18;
			this->btnSetItem->Text = L"Establecer";
			this->btnSetItem->UseVisualStyleBackColor = true;
			// 
			// btnGetItem
			// 
			this->btnGetItem->Location = System::Drawing::Point(112, 263);
			this->btnGetItem->Name = L"btnGetItem";
			this->btnGetItem->Size = System::Drawing::Size(75, 23);
			this->btnGetItem->TabIndex = 17;
			this->btnGetItem->Text = L"Obtener";
			this->btnGetItem->UseVisualStyleBackColor = true;
			// 
			// btnInsert
			// 
			this->btnInsert->Location = System::Drawing::Point(218, 224);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(75, 23);
			this->btnInsert->TabIndex = 16;
			this->btnInsert->Text = L"Insertar";
			this->btnInsert->UseVisualStyleBackColor = true;
			this->btnInsert->Click += gcnew System::EventHandler(this, &MyForm::btnInsert_Click);
			// 
			// btnIndexOf
			// 
			this->btnIndexOf->Location = System::Drawing::Point(112, 185);
			this->btnIndexOf->Name = L"btnIndexOf";
			this->btnIndexOf->Size = System::Drawing::Size(75, 23);
			this->btnIndexOf->TabIndex = 15;
			this->btnIndexOf->Text = L"Índice De";
			this->btnIndexOf->UseVisualStyleBackColor = true;
			this->btnIndexOf->Click += gcnew System::EventHandler(this, &MyForm::btnIndexOf_Click);
			// 
			// btnContains
			// 
			this->btnContains->Location = System::Drawing::Point(112, 146);
			this->btnContains->Name = L"btnContains";
			this->btnContains->Size = System::Drawing::Size(75, 23);
			this->btnContains->TabIndex = 14;
			this->btnContains->Text = L"Contiene";
			this->btnContains->UseVisualStyleBackColor = true;
			this->btnContains->Click += gcnew System::EventHandler(this, &MyForm::btnContains_Click);
			// 
			// btnCount
			// 
			this->btnCount->Location = System::Drawing::Point(6, 104);
			this->btnCount->Name = L"btnCount";
			this->btnCount->Size = System::Drawing::Size(75, 23);
			this->btnCount->TabIndex = 13;
			this->btnCount->Text = L"Contar";
			this->btnCount->UseVisualStyleBackColor = true;
			this->btnCount->Click += gcnew System::EventHandler(this, &MyForm::btnCount_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(6, 62);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 23);
			this->btnClear->TabIndex = 12;
			this->btnClear->Text = L"Limpiar";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(112, 21);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 11;
			this->btnAdd->Text = L"Añadir";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(3, 406);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(57, 13);
			this->label20->TabIndex = 10;
			this->label20->Text = L"RemoveAt";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(3, 364);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(47, 13);
			this->label19->TabIndex = 9;
			this->label19->Text = L"Remove";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(3, 325);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(64, 13);
			this->label18->TabIndex = 8;
			this->label18->Text = L"LastIndexOf";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 286);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(43, 13);
			this->label17->TabIndex = 7;
			this->label17->Text = L"SetItem";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 247);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(44, 13);
			this->label16->TabIndex = 6;
			this->label16->Text = L"GetItem";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(3, 208);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(33, 13);
			this->label15->TabIndex = 5;
			this->label15->Text = L"Insert";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 169);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(44, 13);
			this->label14->TabIndex = 4;
			this->label14->Text = L"IndexOf";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(3, 130);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 13);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Contains";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 88);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Count";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 46);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Clear";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 7);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Add";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->btnDescMaz);
			this->tabPage2->Controls->Add(this->lblMazo);
			this->tabPage2->Controls->Add(this->label9);
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
			this->tabPage2->Size = System::Drawing::Size(450, 551);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ejercicio 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnDescMaz
			// 
			this->btnDescMaz->Location = System::Drawing::Point(95, 63);
			this->btnDescMaz->Name = L"btnDescMaz";
			this->btnDescMaz->Size = System::Drawing::Size(95, 39);
			this->btnDescMaz->TabIndex = 36;
			this->btnDescMaz->Text = L"Mostrar siguiente carta";
			this->btnDescMaz->UseVisualStyleBackColor = true;
			this->btnDescMaz->Click += gcnew System::EventHandler(this, &MyForm::btnDescMaz_Click);
			// 
			// lblMazo
			// 
			this->lblMazo->AutoSize = true;
			this->lblMazo->Location = System::Drawing::Point(131, 41);
			this->lblMazo->Name = L"lblMazo";
			this->lblMazo->Size = System::Drawing::Size(10, 13);
			this->lblMazo->TabIndex = 35;
			this->lblMazo->Text = L"-";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(92, 41);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 13);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Mazo:";
			// 
			// lbxG7
			// 
			this->lbxG7->FormattingEnabled = true;
			this->lbxG7->Location = System::Drawing::Point(382, 357);
			this->lbxG7->Name = L"lbxG7";
			this->lbxG7->Size = System::Drawing::Size(56, 186);
			this->lbxG7->TabIndex = 33;
			// 
			// lbxG6
			// 
			this->lbxG6->FormattingEnabled = true;
			this->lbxG6->Location = System::Drawing::Point(320, 357);
			this->lbxG6->Name = L"lbxG6";
			this->lbxG6->Size = System::Drawing::Size(56, 186);
			this->lbxG6->TabIndex = 32;
			// 
			// lbxG5
			// 
			this->lbxG5->FormattingEnabled = true;
			this->lbxG5->Location = System::Drawing::Point(258, 357);
			this->lbxG5->Name = L"lbxG5";
			this->lbxG5->Size = System::Drawing::Size(56, 186);
			this->lbxG5->TabIndex = 31;
			// 
			// lbxG4
			// 
			this->lbxG4->FormattingEnabled = true;
			this->lbxG4->Location = System::Drawing::Point(196, 357);
			this->lbxG4->Name = L"lbxG4";
			this->lbxG4->Size = System::Drawing::Size(56, 186);
			this->lbxG4->TabIndex = 30;
			// 
			// lbxG3
			// 
			this->lbxG3->FormattingEnabled = true;
			this->lbxG3->Location = System::Drawing::Point(134, 357);
			this->lbxG3->Name = L"lbxG3";
			this->lbxG3->Size = System::Drawing::Size(56, 186);
			this->lbxG3->TabIndex = 29;
			// 
			// lbxG2
			// 
			this->lbxG2->FormattingEnabled = true;
			this->lbxG2->Location = System::Drawing::Point(72, 357);
			this->lbxG2->Name = L"lbxG2";
			this->lbxG2->Size = System::Drawing::Size(56, 186);
			this->lbxG2->TabIndex = 28;
			// 
			// lbxG1
			// 
			this->lbxG1->FormattingEnabled = true;
			this->lbxG1->Location = System::Drawing::Point(9, 357);
			this->lbxG1->Name = L"lbxG1";
			this->lbxG1->Size = System::Drawing::Size(56, 186);
			this->lbxG1->TabIndex = 27;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(379, 341);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 13);
			this->label8->TabIndex = 26;
			this->label8->Text = L"G7";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(322, 341);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"G6";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(255, 341);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"G5";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(193, 341);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"G4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(131, 341);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"G3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(72, 341);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"G2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 341);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"G1";
			// 
			// btnBarajar
			// 
			this->btnBarajar->Location = System::Drawing::Point(95, 108);
			this->btnBarajar->Name = L"btnBarajar";
			this->btnBarajar->Size = System::Drawing::Size(95, 41);
			this->btnBarajar->TabIndex = 19;
			this->btnBarajar->Text = L"Barajar";
			this->btnBarajar->UseVisualStyleBackColor = true;
			this->btnBarajar->Click += gcnew System::EventHandler(this, &MyForm::btnBarajar_Click);
			// 
			// lblBarajar
			// 
			this->lblBarajar->AutoSize = true;
			this->lblBarajar->Location = System::Drawing::Point(240, 122);
			this->lblBarajar->Name = L"lblBarajar";
			this->lblBarajar->Size = System::Drawing::Size(160, 13);
			this->lblBarajar->TabIndex = 18;
			this->lblBarajar->Text = L"Presione R para barajar el mazo.";
			// 
			// lblDificultad
			// 
			this->lblDificultad->AutoSize = true;
			this->lblDificultad->Location = System::Drawing::Point(322, 282);
			this->lblDificultad->Name = L"lblDificultad";
			this->lblDificultad->Size = System::Drawing::Size(74, 13);
			this->lblDificultad->TabIndex = 17;
			this->lblDificultad->Text = L"Elija dificultad:";
			// 
			// lbxDificultad
			// 
			this->lbxDificultad->FormattingEnabled = true;
			this->lbxDificultad->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Facil", L"Medio", L"Dificil" });
			this->lbxDificultad->Location = System::Drawing::Point(403, 269);
			this->lbxDificultad->Name = L"lbxDificultad";
			this->lbxDificultad->Size = System::Drawing::Size(35, 43);
			this->lbxDificultad->TabIndex = 16;
			this->lbxDificultad->Visible = false;
			// 
			// lblDestino
			// 
			this->lblDestino->AutoSize = true;
			this->lblDestino->Location = System::Drawing::Point(50, 22);
			this->lblDestino->Name = L"lblDestino";
			this->lblDestino->Size = System::Drawing::Size(43, 13);
			this->lblDestino->TabIndex = 15;
			this->lblDestino->Text = L"Destino";
			this->lblDestino->Visible = false;
			// 
			// lblOrigen
			// 
			this->lblOrigen->AutoSize = true;
			this->lblOrigen->Location = System::Drawing::Point(6, 22);
			this->lblOrigen->Name = L"lblOrigen";
			this->lblOrigen->Size = System::Drawing::Size(38, 13);
			this->lblOrigen->TabIndex = 14;
			this->lblOrigen->Text = L"Origen";
			this->lblOrigen->Visible = false;
			// 
			// lblEntrada
			// 
			this->lblEntrada->AutoSize = true;
			this->lblEntrada->Location = System::Drawing::Point(6, 152);
			this->lblEntrada->Name = L"lblEntrada";
			this->lblEntrada->Size = System::Drawing::Size(164, 26);
			this->lblEntrada->TabIndex = 13;
			this->lblEntrada->Text = L"Ingrese posicion de carta a tomar\r\n desde arriba hasta abajo";
			this->lblEntrada->Visible = false;
			this->lblEntrada->Click += gcnew System::EventHandler(this, &MyForm::lblEntrada_Click);
			// 
			// txtIndice
			// 
			this->txtIndice->Location = System::Drawing::Point(9, 181);
			this->txtIndice->Name = L"txtIndice";
			this->txtIndice->Size = System::Drawing::Size(100, 20);
			this->txtIndice->TabIndex = 12;
			this->txtIndice->Visible = false;
			// 
			// lbxDestino
			// 
			this->lbxDestino->FormattingEnabled = true;
			this->lbxDestino->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"G1", L"G2", L"G3", L"G4", L"G5", L"G6", L"G7" });
			this->lbxDestino->Location = System::Drawing::Point(53, 41);
			this->lbxDestino->Name = L"lbxDestino";
			this->lbxDestino->Size = System::Drawing::Size(31, 108);
			this->lbxDestino->TabIndex = 11;
			this->lbxDestino->Visible = false;
			// 
			// lbxOrigen
			// 
			this->lbxOrigen->FormattingEnabled = true;
			this->lbxOrigen->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"G1", L"G2", L"G3", L"G4", L"G5", L"G6", L"G7",
					L"Mazo"
			});
			this->lbxOrigen->Location = System::Drawing::Point(9, 41);
			this->lbxOrigen->Name = L"lbxOrigen";
			this->lbxOrigen->Size = System::Drawing::Size(35, 108);
			this->lbxOrigen->TabIndex = 10;
			this->lbxOrigen->Visible = false;
			// 
			// btnMover
			// 
			this->btnMover->Location = System::Drawing::Point(6, 207);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 596);
			this->Controls->Add(this->tabControl1);
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Mazo* juego = new Mazo;
		private: void ActualizarInterfazMazo() {
			lbxG1->Items->Clear();
			lbxG2->Items->Clear();
			lbxG3->Items->Clear();
			lbxG4->Items->Clear();
			lbxG5->Items->Clear();
			lbxG6->Items->Clear();
			lbxG7->Items->Clear();
			for (int i = juego->enJuego[0].Count() - 1; i > -1; i--) {
				String^ ex = Convert::ToString(juego->enJuego[0].GetItem(i)->Numero);
				if (juego->enJuego[0].GetItem(i)->Color) {
					ex += "N";
				}
				else {
					ex += "R";
				}
				lbxG1->Items->Add(ex);
			}
			for (int i = juego->enJuego[1].Count() - 1; i > -1; i--) {
				String^ ex = Convert::ToString(juego->enJuego[1].GetItem(i)->Numero);
				if (juego->enJuego[1].GetItem(i)->Color) {
					ex += "N";
				}
				else {
					ex += "R";
				}
				lbxG2->Items->Add(ex);
			}
			for (int i = juego->enJuego[2].Count() - 1; i > -1; i--) {
				String^ ex = Convert::ToString(juego->enJuego[2].GetItem(i)->Numero);
				if (juego->enJuego[2].GetItem(i)->Color) {
					ex += "N";
				}
				else {
					ex += "R";
				}
				lbxG3->Items->Add(ex);
			}
			for (int i = juego->enJuego[3].Count() - 1; i > -1; i--) {
				String^ ex = Convert::ToString(juego->enJuego[3].GetItem(i)->Numero);
				if (juego->enJuego[3].GetItem(i)->Color) {
					ex += "N";
				}
				else {
					ex += "R";
				}
				lbxG4->Items->Add(ex);
			}
			for (int i = juego->enJuego[4].Count() - 1; i > -1; i--) {
				String^ ex = Convert::ToString(juego->enJuego[4].GetItem(i)->Numero);
				if (juego->enJuego[4].GetItem(i)->Color) {
					ex += "N";
				}
				else {
					ex += "R";
				}
				lbxG5->Items->Add(ex);
			}
			for (int i = juego->enJuego[5].Count() - 1; i > -1; i--) {
				String^ ex = Convert::ToString(juego->enJuego[5].GetItem(i)->Numero);
				if (juego->enJuego[5].GetItem(i)->Color) {
					ex += "N";
				}
				else {
					ex += "R";
				}
				lbxG6->Items->Add(ex);
			}
			for (int i = juego->enJuego[6].Count() - 1; i > -1; i--) {
				String^ ex = Convert::ToString(juego->enJuego[6].GetItem(i)->Numero);
				if (juego->enJuego[6].GetItem(i)->Color) {
					ex += "N";
				}
				else {
					ex += "R";
				}
				lbxG7->Items->Add(ex);
			}
			if (juego->mazo->Count() != 0) {
				String^ mz = Convert::ToString(juego->mazo->GetItem(0)->Numero);
				if (juego->mazo->GetItem(0)->Color) {
					mz += "N";
				}
				else {
					mz += "R";
				}
				lblMazo->Text = mz;
			}
			else {
				lblMazo->Text = "-";
			}

		}
	private: System::Void btnMover_Click(System::Object^ sender, System::EventArgs^ e) {
		bool valido = true;
		int inxOrg = lbxOrigen->SelectedIndex;
		int inxDst = lbxDestino->SelectedIndex;
		int diff;
		switch (lbxDificultad->SelectedIndex)
		{
		case 0: diff = 3;
			break;
		case 1: diff = 5;
			break;
		case 2: diff = 7;
			break;
		default:
			MessageBox::Show("No ha seleccionado la dificultad!");
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
			bool movVal;
			if (inxOrg == 7) {
				try {
					movVal = juego->Mover(inxDst);
				}
				catch (Exception^ ex) {
					movVal = false;
				}
			}
			else {
				try {
					movVal = juego->Mover(juego->enJuego[inxOrg].Count() + 1 - pos, inxOrg, inxDst);
				}
				catch (Exception^ ex) {
					movVal = false;
				}
			}
			if (!movVal) {
				MessageBox::Show("Movimiento no valido");
			}
			else {
				ActualizarInterfazMazo();
				if (juego->Ganancia(diff)) {
					MessageBox::Show("Enhorabuena! Ha ganado el juego!");
					lbxDestino->Visible = false;
					lbxDificultad->Visible = false;
					lbxOrigen->Visible = false;
					txtIndice->Visible = false;
					btnMover->Visible = false;
				}
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
	ActualizarInterfazMazo();
}
private: System::Void btnDescMaz_Click(System::Object^ sender, System::EventArgs^ e) {
	juego->mazo->Pop();
	ActualizarInterfazMazo();
}
private: void ManejarR(System::Object^ sender, System::EventArgs^ e, System::Windows::Forms::KeyEventArgs^ ex) {
	if (ex->KeyCode == Keys::R) {
		btnBarajar_Click(sender, e);
	}
}
private: System::Void lblEntrada_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   List* lista = new List;
private: void actualizarInterfazLista() {
	lbxLista->Items->Clear();
	for (int i = 0; i < lista->Count(); i++) {
		lbxLista->Items->Add(lista->GetItem(i));
	}
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	int item;
	try {
		item = Convert::ToInt32(txtAdd->Text);
		lista->Add(item);
		actualizarInterfazLista();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Valor inválido");
	}
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	lista->Clear();
	actualizarInterfazLista();
}
private: System::Void btnCount_Click(System::Object^ sender, System::EventArgs^ e) {
	lblCount->Text = Convert::ToString(lista->Count());
}
private: System::Void btnContains_Click(System::Object^ sender, System::EventArgs^ e) {
	int item;
	try {
		item = Convert::ToInt32(txtContains->Text);
		if (lista->Contains(item)) {
			lblContains->Text = "T";
		}
		else {
			lblContains->Text = "F";
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Valor inválido");
	}
}
private: System::Void btnIndexOf_Click(System::Object^ sender, System::EventArgs^ e) {
	int item;
	try {
		item = Convert::ToInt32(txtIndexOf->Text);
		lblIndexOf->Text = Convert::ToString(lista->IndexOf(item));
	}
	catch (Exception^ ex) {
		MessageBox::Show("Valor inválido");
	}
}
private: System::Void btnInsert_Click(System::Object^ sender, System::EventArgs^ e) {
	int item;
	int index;
	try {
		item = Convert::ToInt32(txtInsertItem->Text);
		index = Convert::ToInt32(txtInsertIndex->Text);
		lista->Insert(index, item);
		actualizarInterfazLista();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Valor inválido");
	}
}
};
}
