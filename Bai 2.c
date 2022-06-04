int main(){
	char string[] = "helloword";
	char temp;
	
	int i, j;
	int size = strlen(string);
	printf("chuoi truoc khi sap xep: %s \n", string);
	
	for(i = 0; i < size-1; i++){
		for(j = i+1; j < size; j++){
			if(string[i] > string[j]){
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}
	}
	printf("ket qua sau khi sap xep: %s", string);
	return 0;
}
