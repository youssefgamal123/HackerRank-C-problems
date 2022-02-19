char* catAndMouse(int x, int y, int z) {

int desA=abs(z-x);
int desB=abs(z-y);

if (desA==desB)
return "Mouse C";

else if (desA<desB)
  return "Cat A";

else{
  return "Cat B";

}
