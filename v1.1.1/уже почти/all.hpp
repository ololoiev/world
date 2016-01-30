class minral{
	public:
        minral(int xn, int yn);
        int die();
    private:
        int x, y;
        int weight;
        void go();
        void live();
        void delis();
    };


class drok{
	public:
		virtual void live()=0;
        void getparam();
        int adamage;
	protected:
		int x, y, xw, yw;
		bool sex;
		int age;
		int satiety, psatiety;   //сытость
		int energy, stamina;  //энергия выносливость
		int strength;            //силa
		int experience;       //опыт
		int idleness, pidleness; //безделие                            появление   for(i=0; i<8; i++) 	lionesses[i] = NULL;
		int instinct;         //удача
		int courage;             //храбрость
		int weight;           //вес
		int health;              //здоровье
		int immunity;         //иммунитет
		int eaten, peaten;       //съеденное возможность съесть 
		int sensibility;      //чувствительность
		int cond;
        void sleep();
        void rest();
        void run(int &xp, int &yp, int xo, int yo);
        void go(int &xp, int &yp, int xo, int yo);
        void facilitated();    	
};


class drok : drokb{
    public:
        drokb(int ix, int iy, int istamina, int ipstrength, int iexperience, int ipidleness, int iinstinct, int icourage, int iweight, int ihealth, int iimmunity, int ipeaten, int isensibility, int ipsatiety, bool isex);
        int eat(int m);
        void live();
        void vzroslu();
        void die();
        }





class drokm:public drok{
    public:
    	drokm(int istamina, int ipstrength, int iexperience, int ipidleness, int iinstinct, int icourage, int iweight, int ihealth, int iimmunity, int ipeaten, int isensibility, int ipsatiety);
    	void take(drokf &n);
        int eat(int m);
        void comef();
        void live();
        void defited(drokm &n); 
        Spis2 snameb;
        drokf *tr=NULL; drokm *vr=NULL;
    private:
        void die();
        int time,i;
        bool wait ;
        int kodrokf;
        drokf *pdrokf = new drokf [8];
        void call(int p);
        void breed();
        void hunt();
        void fight();
    };
