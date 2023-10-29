int I;
sfr TMOD = 0x89;
sfr TCON = 0x88;
sbit TF0 = 0x8D;
sbit TF1 = 0x8F;
sbit TR0 = 0x8C;
sbit TR1 = 0x8E;
sfr TL0 = 0x8A;
sfr TL1 = 0x8B;
sfr TH0 = 0x8C;
sfr TH1 = 0x8D;

sbit P0_0 = 0x80;
sbit P0_1 = 0x81;
sbit P0_2 = 0x82;
sbit P0_3 = 0x83;

sbit P3_2 = 0xB2;

void main(void) {
    TMOD = 0x01;

    P0_0 = 1;
    P0_1 = 1;
    P0_2 = 1;
    P0_3 = 1;

    for (I=1; I<200; I++) {   //5000/25
        TH0 = 40536/128;
		//2^16 - 25000=40536  
        TL0 = 40536;
        

        TR0 = 1;
		
        while (!TF0);
        TF0 = 0;
    }

	TMOD = 0x10;	

    P0_0 = 0;
    P0_1 = 0;
    P0_2 = 0;
    P0_3 = 0;

    for (I=1; I<200; I++) {

        TH1 = 40536/128;
        TL1 = 40536;						 	

		TR1 = 1;
        while (!TF1);
  		
        TF1 = 0;	   

    }
}
