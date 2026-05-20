//week13-1 好玩的程式設計
//持續week12-1 week11-1程式
PImage img;
void setup(){
  size(300, 400);
  img = loadImage("gopher.png");
}
int[][]a = {{0,0,0}, {0,0,0}, {0,0,0}};
void draw(){
  background(0xFFFFFFF2);
  if(frameCount%60==0){
    int i = int(random(3)), j = int(random(3));
    a[i][j]=60;
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      float x = j*100, y = i*100+100;
      //if(i==0 && j==0) y += mouseY;
      if(a[i][j]>0){
        a[i][j] -= 1;
        y -=   100*sin(a[i][j]*PI/60);
      }
      image(img, x, y, 100, 100);
    }
    rect(0, 100+i*100, 300, 100);
  }
}
