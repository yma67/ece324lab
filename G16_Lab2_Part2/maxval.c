int main(){
  int a[5] = {1, 20, 3, 4, 5};
  int max_val;
  max_val = a[0];
  for (int i=1; i<5; i++){
    if (max_val<a[i]){
      max_val = a[i];
    }
  }
}