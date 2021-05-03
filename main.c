#include <stdio.h>
int binarySearch(int a[], int n, int x)
{
	int l = 0, h = n - 1;
	while (l <= h)
	{
		int mid = (l + h)/2;	
		if (x == a[mid]) {
			return mid;
		}
		else if (x < a[mid]) {
			h = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}

	return -1;
}

int main(void)
{
  int p,value;
	printf("Enter the total elements in the array  ");
    scanf("%d", &p);
		int a[p];
    printf("Enter the array elements\n");
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search  ");
      scanf("%d", &value);
	int n = sizeof(a)/sizeof(a[0]);
	int index = binarySearch(a, n, value);

	if (index != -1) {
		printf("Element found at index %d", index);
	}
	else {
		printf("Element not found in the array");
	}

	return 0;
}