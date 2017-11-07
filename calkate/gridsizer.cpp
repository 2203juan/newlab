








#include "gridsizer.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <sstream>



using namespace std;

GridSizer::GridSizer(const wxString& title)
       : wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(270, 220))
{
  sizer = new wxBoxSizer(wxVERTICAL);
 
  display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1),
     wxSize(-1, -1), wxTE_RIGHT);

  sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
  gs = new wxGridSizer(5, 4, 3, 3);

  gs->Add(new wxButton(this, 1050, wxT("Cls")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("Bck")), 0, wxEXPAND);
  gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("Close")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1007, wxT("7")), 0, wxEXPAND); 
  gs->Add(new wxButton(this, 1008, wxT("8")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1009, wxT("9")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1013, wxT("/")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1004, wxT("4")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1005, wxT("5")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1006, wxT("6")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1012, wxT("*")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1001, wxT("1")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1002, wxT("2")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1003, wxT("3")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1010, wxT("-")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1000, wxT("0")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT(".")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 2000, wxT("=")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1011 , wxT("+")), 0, wxEXPAND);

  sizer->Add(gs, 1, wxEXPAND);
  SetSizer(sizer);
  SetMinSize(wxSize(270, 220));

  Centre();
}

void GridSizer::onCls (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	cout <<"Hola " << nClicks << endl;
}

void GridSizer::onBt0 (wxCommandEvent& WXUNUSED (event)){
	display->AppendText("0");	
	nClicks += 1;
	
}

void GridSizer::onBt1 (wxCommandEvent& WXUNUSED (event)) {
	display->AppendText("1");		
	nClicks += 1;
	
}

void GridSizer::onBt2 (wxCommandEvent& WXUNUSED (event)) {
	display->AppendText("2");		
	nClicks += 1;
	
}

void GridSizer::onBt3 (wxCommandEvent& WXUNUSED (event)){
	display->AppendText("3");		
	nClicks += 1;
	
}

void GridSizer::onBt4 (wxCommandEvent& 	WXUNUSED (event)){
	display->AppendText("4");		
 	nClicks += 1;
	
}

void GridSizer::onBt5 (wxCommandEvent& 	WXUNUSED (event)){
	display->SetValue("5");
	nClicks += 1;
	
}

void GridSizer::onBt6 (wxCommandEvent& WXUNUSED (event)){
	display->AppendText("6");
	nClicks += 1;
	
}

void GridSizer::onBt7 (wxCommandEvent& WXUNUSED (event)){
	display->AppendText("7");
	nClicks += 1;
	
}

void GridSizer::onBt8 (wxCommandEvent& WXUNUSED (event)){
	display->AppendText("8");
	nClicks += 1;
	
}

void GridSizer::onBt9 (wxCommandEvent& WXUNUSED (event)){
	display->AppendText("9");
	nClicks += 1;
	
} 

void GridSizer::onBtSum (wxCommandEvent& WXUNUSED (event)) {
	string texto = (string)display->GetValue();
	valor1= atoi(texto.c_str());
	operacion="+";
	display->SetValue("");
	
	cout << "Resultado suma:  " << total << endl;
}

void GridSizer::onBtRes (wxCommandEvent& WXUNUSED (event)){
	string texto = (string)display->GetValue();
	valor1= atoi(texto.c_str());
	operacion="-";
	display->SetValue("");
	cout << "Resultado resta: " << total << endl;
}

void GridSizer::onBtMul (wxCommandEvent& WXUNUSED (event)){
	string texto = (string)display->GetValue();
	valor1= atoi(texto.c_str());
	operacion="*";
	display->SetValue("");
	cout << "Resultado multiplicacion: " << total << endl;
}

void GridSizer::onBtDiv (wxCommandEvent& WXUNUSED (event)){
	string texto = (string)display->GetValue();
	valor1= atoi(texto.c_str());
	operacion="\";
	display->SetValue("");
	cout << "Resultado dividir: " << total << endl;
}

void GridSizer::onBtIgua (wxCommandEvent& WXUNUSED (event)){
	string texto = (string)display->GetValue();
	valor2 = atoi(texto.c_str());
	int total = valor1 + valor2;
	display->SetValue ("");
	cout<< "Operador: "<< operacion <<endl;
	cout<< "Valor1: "<< valor1;
}
	
BEGIN_EVENT_TABLE(GridSizer, wxFrame)
    EVT_BUTTON(1050,  GridSizer::onCls)
    EVT_BUTTON(1000,  GridSizer::onBt0)
    EVT_BUTTON(1001,  GridSizer::onBt1)
    EVT_BUTTON(1002,  GridSizer::onBt2)
    EVT_BUTTON(1003,  GridSizer::onBt3)
    EVT_BUTTON(1004,  GridSizer::onBt4)
    EVT_BUTTON(1005,  GridSizer::onBt5)
    EVT_BUTTON(1006,  GridSizer::onBt6)
    EVT_BUTTON(1007,  GridSizer::onBt7)
    EVT_BUTTON(1008,  GridSizer::onBt8)
    EVT_BUTTON(1009,  GridSizer::onBt9)
    EVT_BUTTON(1011,  GridSizer::onBtSum)
    EVT_BUTTON(1010,  GridSizer::onBtRes)
    EVT_BUTTON(1012,  GridSizer::onBtMul)
    EVT_BUTTON(1013,  GridSizer::onBtDiv)
	EVT_BUTTON(2000,  GridSizer::onBtIgua)
END_EVENT_TABLE()

