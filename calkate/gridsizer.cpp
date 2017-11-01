#include "gridsizer.h"
#include <iostream>
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
  gs->Add(new wxButton(this, -1, wxT("=")), 0, wxEXPAND);
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
	nClicks += 1;
	cout << "Hola " << nClicks << endl;
	if (nClicks==1)
		valor1 = 0;
	if (nClicks==2)
		valor2 = 0;
}

void GridSizer::onBt1 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	cout <<"Hola " << nClicks << endl;
	if (nClicks==1)
		valor1 = 1;
	if (nClicks==2)
		valor2 = 1;
}

void GridSizer::onBt2 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	cout <<"Hola " << nClicks << endl;
	if (nClicks==1)
		valor1 = 2;
	if (nClicks==2)
		valor2 = 2;
}

void GridSizer::onBt3 (wxCommandEvent& WXUNUSED (event)){
	nClicks += 1;
	cout <<"Hola" << nClicks << endl;
	if (nClicks==1)
		valor1 = 3;
	if (nClicks==2)
		valor2 = 3;
}

void GridSizer::onBt4 (wxCommandEvent& 	WXUNUSED (event)){
	nClicks += 1;
	cout <<"Hola" << nClicks << endl;
	if (nClicks==1)
		valor1 = 4;
	if (nClicks==2)
		valor2 = 4;
}

void GridSizer::onBt5 (wxCommandEvent& 	WXUNUSED (event)){
	nClicks += 1;
	cout <<"Hola" << nClicks << endl;
	if (nClicks==1)
		valor1 = 5;
	if (nClicks==2)
		valor2 = 5;
}

void GridSizer::onBt6 (wxCommandEvent& WXUNUSED (event)){
	nClicks += 1;
	cout <<"Hola" << nClicks << endl;
	if (nClicks==1)
		valor1 = 6;
	if (nClicks==2)
		valor2 = 6;
}

void GridSizer::onBt7 (wxCommandEvent& WXUNUSED (event)){
	nClicks += 1;
	cout <<"Hola" << nClicks << endl;
	if (nClicks==1)
		valor1 = 7;
	if (nClicks==2)
		valor2 = 7;
}

void GridSizer::onBt8 (wxCommandEvent& WXUNUSED (event)){
	nClicks += 1;
	cout <<"Hola" << nClicks << endl;
	if (nClicks==1)
		valor1 = 8;
	if (nClicks==2)
		valor2 = 8;
}

void GridSizer::onBt9 (wxCommandEvent& WXUNUSED (event)){
	nClicks += 1;
	cout <<"Hola" << nClicks << endl;
	if (nClicks==1)
		valor1 = 9;
	if (nClicks==2)
		valor2 = 9;
} 

void GridSizer::onBtSum (wxCommandEvent& WXUNUSED (event)) {
	int total = valor1 + valor2;
	nClicks = 0;
	cout << "Resultado suma " << total << endl;
}

void GridSizer::onBtRes (wxCommandEvent& WXUNUSED (event)){
	int total = valor1 - valor2;
	nClicks = 0;
	cout << "Resultado resta" << total << endl;
}

void GridSizer::onBtMul (wxCommandEvent& WXUNUSED (event)){
	int total = valor1 * valor2;
	nClicks = 0;
	cout << "Resultado multiplicacion" << total << endl;
}

void GridSizer::onBtDiv (wxCommandEvent& WXUNUSED (event)){
	int total = valor1 / valor2;
	nClicks = 0;
	cout << "Resultado dividir" << total << endl;
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
END_EVENT_TABLE()
