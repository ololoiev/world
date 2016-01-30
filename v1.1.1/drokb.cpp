class drok : drokb{
    public:
        drokb(int ix, int iy, int istamina, int ipstrength, int ipidleness, int iinstinct, int iweight, int ihealth, int iimmunity, int ipeaten, int isensibility, int ipsatiety, bool isex, char ipap,){
    	kdrokb++;
    	bdrokb.Add_Spis2(this);
    	pap=ipap;
    	sex=isex;  
    	satiety = psatiety =ipsatiety;   //сытость
        energy = stamina = istamina;  //энергия выносливость
        strength = ipstrength; //силa
    	experience = 0;       //опыт
    	idleness = pidleness = ipidleness; //безделие               
    	instinct = iinstinct;         //удача
    	courage = 0;             //храбрость
    	weight = iweight;           //вес
    	health = ihealth;              //здоровье
    	immunity = iimmunity;      //иммунитет
    	eaten = peaten =ipeaten;       //съеденное возможность съесть 
    	sensibility = isensibility;      //чувствительность
    	x=ix; y=iy;
        }
        int eat(int m){if(satiety<psatiety) {int po; if(satiety+m>psatiety){ po=m-(psatiety-satiety); satiety = psatiety;} else {satiety=satiety+m; po=0;}
          eaten=eaten+m-po; return po;}}
        void live();
        void vzroslu();
        void die(){(bdrokb.del(this));kdrokb--;~drokb;}
        char pap[9];
        }
void drokb :: live(){
    if(satiety==0) die();
    if(eaten>(peaten)) {facilitated(); break;}
    if(cond==facilitate){facilitated(); break;}
    if(globalTime%10==0) {satiety--; go(x, y, x+1, y-1);break;}
    sleep();
    if(globalTime%200==0)age++;
    if(age==3) vzroslu();
}
void drokb :: vzroslu(){
    if (sex=1){drokm *t= new drokm; drokm t(x, y, stamina, pstrength, experience, pidleness, instinct, courage, weight, health, immunity, peaten, sensibility, psatiety);}
    else {drokf *t= new drokf; drokf t(x, y, stamina, pstrength, experience, pidleness, instinct, courage, weight, health, immunity, peaten, sensibility, psatiety, pap);}
    (bdrokb.del(this));kdrokb--;
}
