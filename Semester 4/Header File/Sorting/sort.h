#include <iostream>
using namespace std;

class mergeSort
{
public:
    int key;

    mergeSort(int n)
    {
        int *even = new int[n];
        this->key = n;
        input(even);
        cout << "Before mergeSort ";
        output(even);
        mergeSortFunction(even, 0, n - 1);
        cout << "After mergeSort";
        output(even);
    }
    void input(int *even)
    {
        cout << "Input data" << endl;
        for (int i = 0; i < key; i++)
        {
            cout << "Enter data in " << i << " index : ";
            cin >> even[i];
        }
    }
    void output(int *even)
    {
        cout << "Printing Array: ";
        for (int i = 0; i < key; i++)
        {
            cout << even[i] << " ";
        }
        cout << endl;
    }
    void mergeSortFunction(int *even, int s, int e)
    {
        if (s >= e)
        {
            return;
        }
        int mid = (s + e) / 2;
        mergeSortFunction(even, s, mid);
        mergeSortFunction(even, mid + 1, e);
        merge(even, s, e);
    }
    void merge(int *even, int s, int e)
    {
        int mid = (s + e) / 2;
        int len1 = mid - s + 1;
        int len2 = e - mid;

        int *first = new int[len1];
        int *second = new int[len2];
        int startIndex = s;

        // copying into arr one

        for (int i = 0; i < len1; i++)
        {
            first[i] = even[startIndex++];
        }

        // copying into second array

        startIndex = mid + 1;
        for (int i = 0; i < len2; i++)
        {
            second[i] = even[startIndex++];
        }

        int index1 = 0;
        int index2 = 0;
        startIndex = s;
        while (index1 < len1 && index2 < len2)
        {
            if (first[index1] < second[index2])
            {
                even[startIndex++] = first[index1++];
            }
            else
            {
                even[startIndex++] = second[index2++];
            }
        }
        while (index1 < len1)
        {
            even[startIndex++] = first[index1++];
        }
        while (index2 < len2)
        {
            even[startIndex++] = second[index2++];
        }
    }
};

class selectionSort
{
public:
    int key;

    selectionSort(int n)
    {
        int *even = new int[n];
        this->key = n;
        input(even);
        cout << "Before selectionSort ";
        output(even);
        Selection(even, n);
        cout << "After selection sort";
        output(even);
    }
    void input(int *even)
    {
        cout << "Input data" << endl;
        for (int i = 0; i < key; i++)
        {
            cout << "Enter data in " << i << " index : ";
            cin >> even[i];
        }
    }
    void output(int *even)
    {
        cout << "Printing Array: ";
        for (int i = 0; i < key; i++)
        {
            cout << even[i] << " ";
        }
        cout << endl;
    }
    void Selection(int arr[], int key)
    {
        for (int i = 0; i < key - 1; i++)
        {
            int minIndex = i;

            for (int j = i + 1; j < key; j++)
            {

                if (arr[j] < arr[minIndex])
                    minIndex = j;
            }
            swap(arr[minIndex], arr[i]);
        }
    }
};

class insertionSort
{
public:
    int key;

    insertionSort(int n)
    {
        int *even = new int[n];
        this->key = n;
        input(even);
        cout << "Before insertionSort ";
        output(even);
        insertionSorts(even, n);
        cout << "After insertion sort";
        output(even);
    }
    void input(int *even)
    {
        cout << "Input data" << endl;
        for (int i = 0; i < key; i++)
        {
            cout << "Enter data in " << i << " index : ";
            cin >> even[i];
        }
    }
    void output(int *even)
    {
        cout << "Printing Array: ";
        for (int i = 0; i < key; i++)
        {
            cout << even[i] << " ";
        }
        cout << endl;
    }
    void insertionSorts(int *arr, int key)
    {
        int i = 1;
        while (i < key)
        {
            int temp = arr[i];
            int j = i - 1;

            while (j >= 0)
            {
                if (arr[j] > temp)
                {
                    arr[j + 1] = arr[j];
                }
                else
                {
                    break;
                }
                j--;
            }
            arr[j + 1] = temp;
            i++;
        }
    }
};

class bubbleSort
{
public:
    int key;

    bubbleSort(int n)
    {
        int *even = new int[n];
        this->key = n;
        input(even);
        cout << "Before insertionSort ";
        output(even);
        Bubble(even, n);
        cout << "After insertion sort";
        output(even);
    }
    void input(int *even)
    {
        cout << "Input data" << endl;
        for (int i = 0; i < key; i++)
        {
            cout << "Enter data in " << i << " index : ";
            cin >> even[i];
        }
    }
    void output(int *even)
    {
        cout << "Printing Array: ";
        for (int i = 0; i < key; i++)
        {
            cout << even[i] << " ";
        }
        cout << endl;
    }
    int Bubble(int arr[], int key)
    {
        int temp;
        for (int i = 0; i < key - 1; i++)
        {
            for (int j = 0; j < key - i - 1; j++)
            {
                if (arr[i] > arr[i + 1])
                {

                    swap(arr[i], arr[i + 1]);
                }
            }
        }
    }
};

class quickSort
{
public:
    int key;

    quickSort(int n)
    {
        int *even = new int[n];
        this->key = n;
        input(even);
        cout << "Before insertionSort ";
        output(even);
        quick(even, 0,key-1);
        cout << "After insertion sort";
        output(even);
    }
    void input(int *even)
    {
        cout << "Input data" << endl;
        for (int i = 0; i < key; i++)
        {
            cout << "Enter data in " << i << " index : ";
            cin >> even[i];
        }
    }
    void output(int *even)
    {
        cout << "Printing Array: ";
        for (int i = 0; i < key; i++)
        {
            cout << even[i] << " ";
        }
        cout << endl;
    }
    int partition(int *arr, int s, int e)
    {
        int pivot = arr[s];
        int count = 0;
        for (int i = s + 1; i <= e; i++)
        {
            if (arr[i] <= pivot)
            {
                count++;
            }
        }
        int pivotIndex = s + count;
        swap(arr[pivotIndex], arr[s]);
        int i = s;
        int j = e;

        while (i < pivotIndex && j > pivotIndex)
        {
            while (arr[i] <= pivot)
            {
                i++;
            }

            while (arr[j] >= pivot)
            {
                j--;
            }

            if (i < pivotIndex && j > pivotIndex)
            {
                swap(arr[i++], arr[j--]);
            }
        }

        return pivotIndex;
    }
    void quick(int *arr, int s, int e)
    {
        if (s >= e)
        {
            return;
        }
        int p = partition(arr, s, e);

        quick(arr, s, p - 1);
        quick(arr, p + 1, e);
    }
};
