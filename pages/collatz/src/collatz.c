#include<stdio.h>

int coll_length(long long n){
    long long length=0;
    //υπολογισμος μηκους ακολουθιας collatz
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }else{
            n=3*n+1;
        }
        length++;
    }
    return length+1;
}

int main(){
    // Διαβαζω τα ορια ευρος απο τον χρηστη
    long long arxh,telos;
    printf("dwse mou to evros ton arithmwn\n");
    scanf("%lld %lld",&arxh, &telos);
    // Αρχικοποιω την μεταβλητη που θα κραταει το μεγιστο μηκος
    long long max_length=0;
    // Ελεγχω το μηκος της ακολουθιας collatz για καθε αριθμο
    for(long long i=arxh;i<=telos;i++){
        // καλω την συναρτηση
       long long length=coll_length(i);
       // αν το μηκος ειναι μεγαλυτερο απο το μεγιστο, ενημερωνω το μεγιστο
       if(length>max_length){
        max_length=length;
       }

    // εκτυπωση του μεγιστου μηκους
    printf("to megisto mhkos akolouthia collatz einai to:%lld\n",max_length);
}
}