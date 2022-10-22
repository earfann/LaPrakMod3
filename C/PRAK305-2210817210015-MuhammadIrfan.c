#include<stdio.h>
    int main(){
        int sec, hari, jam, menit, detik, modA, modB;
        printf("Masukkan jumlah detik: "); scanf("%d", &sec);
        hari = sec / (60*60*24);
        modA = sec % (60*60*24);
        jam = modA / (60*60);
        modB = sec % (60*60);
        menit = modB / 60;
        detik = sec % 60;
        if (sec>=1 && sec<60){
            printf("00:00:%d", detik);}
            else if (sec>=60 && sec<3600){
            printf("00:%d:%d", menit, detik);}
            else if (sec>=3600 && sec<86400){
            printf("%d:%d:%d", jam, menit, detik);}
            else{
            printf("%d hari %d:%d:%d", hari, jam, menit, detik);}
        return 0;
    }