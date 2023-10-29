sfr SCON =0x98;
sfr T3FD = 0x9D;
sfr T3CON = 0x9E;
sfr SBUF = 0x99;
sbit TI = 0x99;
sbit RI = 0x98;
sbit REN = 0x9C;
int I;
main()
{
	
    SCON =0x40;
    T3FD =0x2D; 
    T3CON = 0x85; 

    SBUF ='G';
    while(!TI);
    TI=0;
 
    SBUF ='A';
    while(!TI);
    TI=0;
 
    SBUF ='T';
    while(!TI);
    TI=0;
 
    SBUF ='I';
    while(!TI);
    TI=0;

    SBUF ='Y';
    while(!TI);
    TI=0;

    SBUF ='A';
    while(!TI);
    TI=0;

    SBUF ='T';
    while(!TI);
    TI=0;

	SBUF ='O';
    while(!TI);
    TI=0;

    SBUF ='V';
    while(!TI);
    TI=0;

    SBUF ='A';
    while(!TI);
    TI=0;
	
	while(1){
}

}