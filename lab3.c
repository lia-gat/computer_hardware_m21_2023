sfr P0 = 0x80;
sfr P1 = 0x90;
sbit P0_0 = 0x80;
sbit P0_1 = 0x81;
sbit P0_2 = 0x82;
sbit P0_3 = 0x83;
sbit P0_4 = 0x84;
sbit P0_5 = 0x85;
sbit P0_6 = 0x86;
sbit P1_1 = 0x91;

sbit P3_2 = 0xB2;

void main(void) {
    P0 = 0;
    P1 = 0;

    P0_5 = 1;
    P0_6 = 1;

    if ((P0_4 == 0) && (P1_1 == 0)) {
        P0_2 = 1;
    }

}
