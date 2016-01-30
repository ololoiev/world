//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int globalTime=0;
//---------------------------------------------------------------------------
template <class T>
class Spis2 {
    public:
    	Spis2(){next=NULL}
        void Add_Spis2(T *in){Spis2 <T> *t;while(next != NULL){this=this->next;} t = new Spis2; t -> info = in; t -> next = NULL; this->next=t; }
   //spis()        void View_Spis2(){Spis2 <T> *t;t=this; while(t != NULL) {spis(t->info);t=t->next;}}
        void alive(){Spis2 <T> *t;t=this; while(t != NULL) {(t->info)->live;t=t->next;}}
        void Del_All() {Spis2 <T> *t;while(this != NULL) {t = this; this=this->next; delete t;}}
        void del(T *in){Spis2 <T> *t;while(in!=info){t=this; this=this->next;} t->next=this->next;     
        this->do1;    
        Image1->Canvas->Pen->Color=clWhite;
        Image1->Canvas->MoveTo(gx,gy);
        Image1->Canvas->LineTo(gx+1,gy+1); delete this;}
        void do1(){gx=info->x; gy=info->y;}
    private:
        T *info;
        Spis2 *next;
 };
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
  //      vorld();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
if(Edit19->Visible==false){
        if(RadioGroup3->ItemIndex==3){
                Label44->Visible=true;
                Label45->Visible=true;
                Edit19->Visible=true;
                Edit20->Visible=true; }
        else{
                Label44->Visible=true;
                Label45->Visible=true;
                Edit19->Visible=true;
                Edit20->Visible=true;
                Edit7->Visible=true;
                Edit8->Visible=true;
                Edit9->Visible=true;
                Edit10->Visible=true;
                Edit11->Visible=true;
                Edit12->Visible=true;
                Edit13->Visible=true;
                Edit14->Visible=true;
                Edit15->Visible=true;
                Edit16->Visible=true;
                Edit17->Visible=true;
                Edit18->Visible=true; }
else {
      if(RadioGroup3->ItemIndex==0) drokm(StrToInt(Edit19->Text),StrToInt(Edit20->Text),StrToInt(Edit7->Text), StrToInt(Edit8->Text), StrToInt(Edit9->Text), StrToInt(Edit10->Text), StrToInt(Edit11->Text), StrToInt(Edit12->Text), StrToInt(Edit13->Text), StrToInt(Edit14->Text), StrToInt(Edit15->Text), StrToInt(Edit16->Text), StrToInt(Edit17->Text), StrToInt(Edit18->Text));
      if(RadioGroup3->ItemIndex==1) drokf(StrToInt(Edit19->Text),StrToInt(Edit20->Text),StrToInt(Edit7->Text), StrToInt(Edit8->Text), StrToInt(Edit9->Text), StrToInt(Edit10->Text), StrToInt(Edit11->Text), StrToInt(Edit12->Text), StrToInt(Edit13->Text), StrToInt(Edit14->Text), StrToInt(Edit15->Text), StrToInt(Edit16->Text), StrToInt(Edit17->Text), StrToInt(Edit18->Text));
      if(RadioGroup3->ItemIndex==2) drokb(StrToInt(Edit19->Text),StrToInt(Edit20->Text),StrToInt(Edit7->Text), StrToInt(Edit8->Text), StrToInt(Edit9->Text), StrToInt(Edit10->Text), StrToInt(Edit11->Text), StrToInt(Edit12->Text), StrToInt(Edit13->Text), StrToInt(Edit14->Text), StrToInt(Edit15->Text), StrToInt(Edit16->Text), StrToInt(Edit17->Text), StrToInt(Edit18->Text));
      if(RadioGroup3->ItemIndex==3) minral(StrToInt(Edit19->Text),StrToInt(Edit20->Text));
                Label44->Visible=false;
                Label45->Visible=false;
                Edit19->Visible=false;
                Edit20->Visible=false;
                Edit7->Visible=false;
                Edit8->Visible=false;
                Edit9->Visible=false;
                Edit10->Visible=false;
                Edit11->Visible=false;
                Edit12->Visible=false;
                Edit13->Visible=false;
                Edit14->Visible=false;
                Edit15->Visible=false;
                Edit16->Visible=false;
                Edit17->Visible=false;
                Edit18->Visible=false; }
}
//---------------------------------------------------------------------------

