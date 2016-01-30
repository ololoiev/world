#include <math.h>  
enum condition {fights, facilitate, rests, hunts, sleeps, breeds, finish};
int kdrokm, kdrokf, kdrokb;
class drok{
	public:
		virtual void live()=0;
        void getparam(){prinf("sex, sex, age, agen, age, agen, satiety, psatiety, satiety, psatiety, energy, stamina, energy, stamina, strength, pstrength, strength, pstrength, experience, experience, idleness, pidleness, idleness, pidleness, instinct, instinct, courage, courage, weight, weight, health, health, immunity, immunity, eaten, peaten, eaten, peaten, sensibility, sensibility")}; 
        int adamage;
		int x, y, xw, yw;
		bool sex;
		int age;
		int satiety, psatiety;   //сытость
		int energy, stamina;  //энергия выносливость
		int strength;            //силa
		int experience;       //опыт
		int idleness, pidleness; //безделие                          
		int instinct;         //удача
		int courage;             //храбрость
		int weight;           //вес
		int health;              //здоровье
		int immunity;         //иммунитет
		int eaten, peaten;       //съеденное возможность съесть 
		int sensibility;     //чувствительность
	protected:     
		int cond;
        void sleep(){if(((health<weight*100)||(energy<stamina)){ if (health<weight*100)health=health+ratio*4+immunity/2; if(energy<stamina) energy=energy+ratio*4; cond=sleeps;} else cond=finish;}
        void rest() {if((health<weight*100)||(energy<stamina)){if (health<weight*100)health=health+ratio*2+immunity/4; if(energy<stamina) energy=energy+ratio*2; cond=rests;} else cond=finish;} 
        void run(int &xp, int &yp, int xo, int yo){};
        void go(int &xp, int &yp, int xo, int yo){int r1; double angle; angle=atan((yp-yo)/(xp-xo)); r1=6*ratio; xp=xp+r1*cos(angle); yp=yp+r1*sin(angle); stamina=stamina+ratio;} 
        void facilitated (){if(eaten>(peaten/100*5){eaten=eaten-3*ratio; cond=facilitate;} else cond=finish;}     	
};
    void drok::run(int &xp, int &yp, int xo, int yo){
        int r1;
        float angle;
        if (energy>(stamina/100*95)){
            r1=sqrt(fabs(xp-xo)*fabs(xp-xo)+fabs(yp-yo)*fabs(yp-yo));
            angle=atan((yp-yo)/(xp-xo));
            r1=12*ratio;
            xp=xp+r1*cos(angle);
            yp=yp+r1*sin(angle);
            energy=energy-3*ratio;
            stamina=stamina+2*ratio;}
        else go(xp, yp, xo, yo);
         };

        
