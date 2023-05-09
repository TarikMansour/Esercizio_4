#include <stdio.h>
#include <limits.h>
int riempeArray(int numeri[])
{
	int elemento = 0, n = 0;
	while (1)
	{
		printf("inserisci un elemento. Premi -1 per terminare l'inserimento\n");
		scanf("%d", &elemento);
		if (elemento == -1)
		{
			return n;
		}

		*(numeri+n) = valore;
		n++;
	}
}

int menu()
{

	int scelta;

	printf("premere 1 per mostrare il contenuto dell'array\n");
	printf("premere 2 per inserire un elemento in coda\n");
	printf("premere 3 per modificare un elemento\n");
	printf("premere 4 per eliminare un elemento\n");
	printf("premere 5 per ricercare un elemento\n");
	printf("premere 6 per inserire un elemento in una certa posizione\n");
	printf("premere 7 per mostrare il contenuto dell'array all'inverso\n");
	printf("premere 8 per mostrare il elemento massimo dell'array\n");
	printf("premere 0 per terminare\n");

	scanf("%d", &scelta);

	return scelta;
}
void stampaArray(int n, int arr[]){
    for (int i = 0; i<n; i++){
        printf("%d/n ",*(arr + i));
    }
}
void stampaArrayInv (int n, int arr[]){
    for (int i = n; i>0;i--){
        printf("%d/n ",*(arr + i));
    }
}
int ricercaArray (int n, int arr[],int elemento){
    for (int i = 0; i<n; i++){
        if (elemento == *(arr + i)){
         printf("%d/n l'elemento risulta presente sulla posizione");
		 return i;
        }
    }
	return -1;
}
int modificaElemento (int n, int arr[], int elemento){
    arr[n]= elemento;
	return n;
}

int inserirepos(int arr[], int *n, int posizione, int elemento)
{
	for (int i = *n; i > posizione; i--)
	{
		*(arr + 1) = arr[i - 1];
	}
	arr[posizione] = elemento;
	*(n+1);
	return posizione;
}
int insericoda(int arr[], int *n, int numero)
{

	arr[*n] = numero;
	*(n+1);
	return *n;
}
void eliminaelemento(int arr[], int *n, int posizione)
{

	for (int i = posizione; i < *n; i++)
	{
		*(arr + 1) = arr[i + 1];
	}
	*(n-1);
	return posizione;
}
int nummax (int arr[], int n)
{
	int massimo = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > massimo)
			massimo = *(arr+1);

	return massimo;
}
void scelta(int s, int numeri[], int *n)
{

	if (s == 1)
	{
		stampaArray(numeri, *n);
	}
	if (s == 2)
	{
		int numero, posizione;
		printf("inserisci un numero: ");
		scanf("%d", &numero);
		posizione = insericoda(numeri, n, numero);
		printf("elemento inserito in posizione: %d", posizione);
	}
	if (s == 3)
	{
		int elemento, posizione;
		printf("Inserisci il elemento da sostituire: ");
		scanf("%d", &elemento);
		posizione = ricercaArray(numeri, *n, elemento);

		if (posizione > -1)
		{
			printf("Inserisci il nuovo elemento: ");
			scanf("%d", &elemento);
			modificaElemento(numeri, posizione, elemento);
		}
		else
		{
			printf("elemento non trovato");
		}
	}
	if (s == 4)
	{
		int elemento, posizione;
		printf("Inserisci il elemento da eliminare: ");
		scanf("%d", &elemento);
		posizione = ricercaArray(numeri, *n, elemento);

		if (posizione > -1)
		{
			elimina(numeri, n, posizione);
		}
		else
		{
			printf("elemento non esistente");
		}
	}
	if (s == 5)
	{
		int posizione, elemento;
		printf("Inserisci il elemento da ricercare: ");
		scanf("%d", &elemento);
		posizione = ricercaArray(numeri, *n, elemento);

		if (posizione > -1)
		{
			printf("elemento trovato in posizione %d", posizione);
		}
		else
		{
			printf("elemento non esistente");
		}
	}

	if (s == 6)
	{
		int elemento, posizione;
		printf("Inserisci il elemento da aggiungere: ");
		scanf("%d", &elemento);
		printf("Inserisci la posizione: ");
		scanf("%d", &posizione);

		if (posizione < *n)
		{
			inserirepos(numeri, n, posizione, elemento);
		}
		else
		{
			printf("elemento non esistente");
		}
	}
	if (s == 7)
	{
		stampaArrayInv(numeri, *n);
	}

	if (s == 8)
	{
		int max = nummax(numeri, *n);
		printf("Il massimo dell'array è: %d", max);
	}
}

int main(int argc, char *argv[])
{

	int scelta, numeri[SHRT_MAX], n = riempeArray(numeri);

	while (1)
	{
		scelta = menu();

		if (scelta == 0)
		{
			printf("fine programma\n");
			return 0;
		}
		
	}
}