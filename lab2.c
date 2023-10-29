sfr P0 = 0x80;
sfr P1 = 0x90;
sbit P0_0 = 0x80;
sbit P0_1 = 0x81;
sbit P0_2 = 0x82;
sbit P0_3 = 0x83;
sbit P0_4 = 0x84;


sbit P3_2 = 0xB2;

void main(void) {
    P0_0 = 1;
    P0_1 = 1;
    P0_2 = 1;
    P0_3 = 1;
   

    if (P3_2 == 0) {
        P0_0 = 0;
        P0_1 = 0;
        P0_2 = 0;
        P0_3 = 0;
    }

}
