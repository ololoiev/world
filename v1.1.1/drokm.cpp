class drokm:public drok{
    public:
    	drokm(int ix, int iy, int istamina, int ipstrength, int iexperience, int ipidleness, int iinstinct, int icourage, int iweight, int ihealth, int iimmunity, int ipeaten, int isensibility, int ipsatiety);
    	void take(drokf &n);
        int eat(int m){if(satiety<psatiety) {int po; if(satiety+m>psatiety){ po=m-(psatiety-satiety); satiety = psatiety;} else {satiety=satiety+m; po=0;}
          eaten=eaten+m-po; wait=0; return po;}}
        void comef() {wait=0;}
        void live();
        void defited(drokm &n); 
        drokf *tr; drokm *vr;
    private:
        void die(){(bdrokm.del(this));kdrokm--;~drokm;}
        int timem,i;
        bool wait ;
        int kodrokf;
        drokf *pdrokf = new drokf [8];
        void call(int p){if (p==-1) for(i=0;i<kdrokf;i++){drokf[i]->coll(x, y, 0);} else drokf[p]->coll(x, y, 1);}
        void breed();
        void hunt();
        void fight();
    };
drokm :: drokm(int ix, int iy, int istamina, int ipstrength, int iexperience, int ipidleness, int iinstinct, int icourage, int iweight, int ihealth, int iimmunity, int ipeaten, int isensibility, int ipsatiety){
    tr=NULL; vr=NULL;
    timem=0;
    wait=0 ;
    kodrokf=0;
	kdrokm++;
	bdrokm.Add_Spis2(this);
	for(i=0; i<8; i++) 	pdrokf[i] = NULL;
	sex=1;  
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
};  
void drokm :: breed(){
    if(kodrokf==0){cond=finish; wait=0; break;}
    if(wait==0&&cond!=breeds){  cond=breeds;
    int b=0, p1;
    for(i=0; i<kodrokf; i++) {p1=pdrokf[i]->gestation(); if(p1) b++;}
    if(3*b<kodrokf){for(i=0; i<kodrokf; i++) {p1=pdrokf[i]->gestation();if(pdrokf[i]->timeb!=0) p1=1; if(p1==0 )break;}}
    else {for(i=0; i<kodrokf; i++) {p1=pdrokf[i]->gestation(); if(p1)break;}}
    call(i);  wait=1; timem=0;}
    if(wait==0&&cond==breeds&&timem<4){
        timem++;
        tr->fap();
        if(timem=4) {cond=finish; tr=NULL;}}
    };
void drokm :: hunt(){
	int k1=0;
    if((wait==0)&&(cond=!hunts)){
        call(-1); 
        wait=1; 
        cond=hunts;} 
    for(i=0;i<kdrokf;i++){if (drokf[i].gestation())k1++;}
    if((wait==1-leonesses+k1)&&(cond==hunts)){
        for(i=0;i<kdrokf;i++){if (!drokf[i]->gestation())drokf[i]->hunt();}
        wait=1;}
    if(satiety>=(psatiety/100*95)){wait=0; cond=finish;}
	};
void drokm :: take(drokf &n){
switch(kdbrokf){
	case 0: kdrokf++; pdrokf[0]=n; break;
	default: if((strcmp(pdrokf[0]->named(),n->named())==0)&&(kdrokf<6)){
				pdrokf[kdrokf-1]=n;
				kdrokf++;
				} 
			else if(kdrokf<8){
				int max=0,d;
				for (int i=0;i<kdrokf;i++){
					if(pdrokf[i]->strength>max) { max=pdrokf[i]->strength; d=i;}
				}
				pdrokf[d]->fightf(n); n->fightf(pdrokf[d]);	
			}
    }
};
void drokm :: defited()   {
    int j=8-vr->kodrokf; 
    if(j<kodrokf){
    for (i = 0; i < kodrokf-1; i++)
 	    for (j = i+1; j < kodrokf; j++)
            if (pdrokf[i].strength > pdrokf[j].strength) { 		// Переставляем элементы
            r = pdrokf[i];  
			pdrokf[i] =pdrokf[j];  
			pdrokf[j] = r; 
				}
    j=0; 
    for(i=vr->kodrokf;i<8;i++){vr->pdrokf[i]=pdrokf[kodrokf-1-j]; pdrokf[kodrokf-1-j]->killb; pdrokf[kodrokf-1-j]=NULL; j++}
    }
    else{j=0; for(i=vr->kodrokf;i<vr->kodrokf+kodrokf;i++){vr->pdrokf[i]=pdrokf[j]; pdrokf[j]->killb(); j++}for(i=0; i<8; i++) 	delete pdrokf[i]; die();}
        
    };
void drokm :: fight(){
    cond=fights;
    Spis2 *ch=&bdrokm;
    double vvr, min1=2 147 483 647;
    if(vr==NULL)
    for(i=0; i<kdrokm;i++){
        if((ch->info)->vr==NULL){
        vvr=sqrt(fabs((x-ch->x)*(x-ch->x)+(y-ch->y)*(y-ch->y)));
        if((min1>vvr)&&(vvr!=0)){min1=vvr; vr=ch->info;}}
        ch=ch->next;
    }
    experience++;
	double xp=x, xo=vr->x, yp=y, yo=vr->y;
	if((sqrt(fabs(xp-xo)*fabs(xp-xo)+fabs(yp-yo)*fabs(yp-yo)))>ratio)
	go(x, y, vr->x, vr->y);
	else if((strength*(1.05+idleness / pidleness/2+courage/100)<vr->strength)&&(idleness != pidleness)){
         randomize();
         xw=random(460);
         randomize();
         yw=random(310);
         run(x, y, xw, yw);
	else{
        vr->vr=this;
		drokm &prot=vr;
		if(strength<pstrength) strength=strength+ratio;
		experience=experience+ratio;
		if (energy>(stamina/100*5)){
			energy=energy-3*ratio;
			prot->adamage=prot->adamage+2*strength*experiense*instinct/100000;
		}
		else prot->adamage=strength*experiense*insert/100000;
		health=health-adamage*instinct*100;
		adamage=0;
		if (health<weight/100*20){ defited(); courage=courage-25; cond=finish;vr->courage=vr->courage+5;vr->vr=NULL;}
	}
    }if(cond==finish)vr=NULL;
};
void drokm :: live(){
    stamina--;
    satiety--;
    idleness++;
    if(health<weight/100)health++;
    if(satiety==0) die();
    if(globalTime%200==0)age++;
    if(adamage!=0){fight(); break;}
    if(cond==fights){fight(); break;}
    if(cond==facilitate){facilitated(); break;}
    if(cond==rests){rest(); break;}
    if(cond==sleeps){sleep(); break;}
    if(cond== breeds){breed(); break;}
    if(cond==hunts){hunt(); break;}
    if(energy < stamina/100*75) {rest(); break;}
    if(eaten>(peaten/100*95)) {facilitated(); break;}
    if(satiety< psatiety*25/100) {hunt(); break;}
    if(50*pidleness<100*idleness){fight(); break;}
    if(energy < stamina/100*5) {sleep(); break;}
    if(idleness<pidleness/100*70){breed(); break;}
    rest();
};
