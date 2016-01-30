class drok : drokf{
    public:
        drokf(int ix, int iy, int istamina, int ipstrength, int iexperience, int ipidleness, int iinstinct, int icourage, int iweight, int ihealth, int iimmunity, int ipeaten, int isensibility, int ipsatiety, drokm *pap);
        int eat(int m){if(satiety<psatiety) {int po; if(satiety+m>psatiety){ po=m-(psatiety-satiety); satiety = psatiety;} else {satiety=satiety+m; po=0;}
          eaten=eaten+m-po; wait=0; return po;}}
        void live();
        void defited(drokm &n); 
        drokf *tr; minral *vr; drokm *hoz;
        void fap(){cond=breeds; timem++; if(timem>2)gest=1; if(timeb==0){timeb=globalTime} if(timem==4){timem=0; cond=finish}}
        void coll(xp, yp, n){run(x, y, xp, yp); if(!n)cond=hunts; else cond=breeds;}
        void killb(){for(i=0; i<6; i++){pdrokb[i]->die();pdrokb[i] = NULL}}
        bool gestation(){return gest;}
        char named(){return papasha;}
        void fightf();
        void hunt();
        int timeb;
    private:
        void die(){snameb.Del_All(); (bdrokm.del(this));kdrokm--; ~drokf;}
        int timem, i;
        char papasha[9];
        bool ehoz, gest;
        int kodrokf;
        drokb *pdrokb= new drokb[6];
        void call(int p){if (p==-1) for(i=0;i<kdrokf;i++){drokf[i]->coll(x, y);} else drokf[p]->coll(x, y);}
        void bear();
    };
        
drokf :: drokf(int ix, int iy, int istamina, int ipstrength, int iexperience, int ipidleness, int iinstinct, int icourage, int iweight, int ihealth, int iimmunity, int ipeaten, int isensibility, int ipsatiety, char pap){
	tr=NULL; vr=NULL;
	gest=0;
	timeb=0;
    kdrokf++;
	bdrokf.Add_Spis2(this);
	for(i=0; i<6; i++) 	pdrokb[i] = NULL;
	sex=0;  
	satiety = psatiety =ipsatiety;   //сытость
	energy = stamina = istamina;  //энергия выносливость
	strength = ipstrength; //силa
	experience = iexperience;       //опыт
	idleness = pidleness = ipidleness; //безделие               
	instinct = iinstinct;         //удача
	courage = icourage;             //храбрость
	weight = iweight;           //вес
	health = ihealth;              //здоровье
	immunity = iimmunity;      //иммунитет
	eaten = peaten =ipeaten;       //съеденное возможность съесть 
	sensibility = isensibility;      //чувствительность
	x=ix; y=iy;
	papasha=pap;
}; 

void drokf :: bear(){
    int kol, pol;
    randomize();
    kol = random(5)+2; 
    for(i=0; i<kol; i++){
        randomize();
        pol = random(1);
        int we=200+2*(random(30)-15);
        float sluc=(randrom(60)-30)/100+1;    
        if(pol){drokb *t= new drokb; drokb t(x, y, hoz.stamina*sluc, hoz.pstrength*sluc, hoz.pidleness*sluc, randrom(100), we, we*100, hoz.immunity, hoz.peaten*sluc, hoz.sensibility*sluc, hoz.psatiety*sluc, pol, hoz); }
        else {drokb *t= new drokb; drokb t(x, y, stamina*sluc, pstrength*sluc, pidleness*sluc, randrom(100), we, we*100, immunity,peaten*sluc, sensibility*sluc, psatiety*sluc, pol, hoz); }
}}

void drokf :: breed(){
    

void drokf :: live(){
    if(globalTime-timeb==200){bear(); timeb=0; break;}
    if(cond==breed) {breed(); break;}
}
