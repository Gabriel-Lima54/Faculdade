

	int v[10], i, num, j, ult = 9;
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	printf("\nValores digitados: ");
	for (i=0;i<10;i++)
		printf("%d ", v[i]);
	printf("\nDigite o valor a ser removido:\n");
	scanf("%d", &num);
	i = 0;
	while (i < ult){
		if (v[i] == num){
			for (j=i;j<ult;j++){
				v[j] = v[j+1];
			}
			ult--;
		}
		else
			i++;
	}
	if (v[ult] == num)
		ult--;
	printf("\nValores novos: ");
	for (i=0;i<=ult;i++)
		printf("%d ", v[i]);
}
