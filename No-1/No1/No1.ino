int nilai[5];
int a,b,c,d,e,masuk;
void setup() {
 Serial.begin(9600);
}

void loop() {
 for(a=0;a<=4;a++){
 while(!Serial.available());
 nilai[a] = Serial.parseInt();
 Serial.println(nilai[a]);
 }
 Serial.println("");

 for(b=0;b<=4;b++){
 Serial.print(nilai[b]);
 }
  Serial.println("");
  Serial.println("----------");

 for(c=0;c<=4;c++){
    for(d=c+1;d<=4;d++){
      if (nilai[c] > nilai[d]){
        masuk = nilai[c];
        nilai[c] = nilai[d];
        nilai[d] = masuk;
      }
    }
 }
 for(e=0;e<=4;e++){
 Serial.print(nilai[e]);
 }
 Serial.println("");
}
