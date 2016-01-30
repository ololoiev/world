template <class T>
class Spis2 {
    public:
    	Spis2(){next=NULL}
        void Add_Spis2(T *in){Spis2 <T> *t;while(next != NULL){this=this->next;} t = new Spis2; t -> info = in; t -> next = NULL; this->next=t; }
        void View_Spis2(){Spis2 <T> *t;t=this; while(t != NULL) {spis(t->info);t=t->next;}}                               //spis()
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
Spis2 <drokm> bdrokm;
Spis2 <drokf> bdrokf;
Spis2 <drokb> bdrokb;
Spis2 <minral> bminral; 
