int minrals=0;
class minral{
	public:
        minral(int xn, int yn){
            x=xn; y=yn;
            go();
            minrals++;
            bminral.Add_Spis2(this);
            weight=5*ratio;
        }
        int die(){bminral.del(this); minrals--; return weight;}
    private:
        int x, y;
        int weight;
        void go(){double fi; int r1; randomize(); fi=random(360); fi=fi/57.32484; randomize(); r1=random(3); 
            x=x+r1*cos(fi); y=y+r1*sin(fi) if(y>Image1->Height)y=y-Image1->Height; if(x>Image1->Width)x=x-Image1->Width;}
        void live(){weight++; go();if(weight>21*ratio){ delis(); weight=5*ratio;}}
        void delis(){for(int i=0; i<3; i++){minral *t= new minral; minral t(x, y);}}
    };
