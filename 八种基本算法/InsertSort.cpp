#include <iostream>
#include <vector>

using namespace std;

// ����һ����������飬���ҵ�һ�����ڵ���value���±꣬�����ڷ���-1
int BinarySearch(vector<int> list, int n, int value){
	int left = 0;
	int right = n - 1;

	while (left <= right){
		int middle = left + ((right - left) >> 1);

		if (list[middle] >= value){
			right = middle - 1;
		}
		else{
			left = middle + 1;
		}
	}
	return (left < n) ? left : -1;
}

vector<int> BinaryInsertSort(vector<int> list){
	vector<int> result = list;
	for (int i = 1; i < result.size(); i++){
		int insert_index = BinarySearch(result, i, result[i]);
		if (insert_index != -1){
			int temp = result[i];
			int j = i - 1;
			while (j >= insert_index){
				result[j + 1] = result[j];
				j--;
			}
			result[j + 1] = temp;
		}
		printf("�� %d �ˣ� ", i);
		for (int i = 0; i < result.size(); i++){
			cout << result[i] << " ";
		}
		cout << endl;
	}
	return result;
}

void main(){
	int arr[] = { 6, 4, 8, 9, 2, 3, 1 };
	vector<int> test(arr, arr + sizeof(arr) / sizeof(arr[0]));
	cout << "����ǰ" << endl;
	for (int i = 0; i < test.size(); i++){
		cout << test[i] << " ";
	}
	cout << endl;
	vector<int> result;
	result = BinaryInsertSort(test);
	cout << "�����" << endl;
	for (int i = 0; i < result.size(); i++){
		cout << result[i] << " ";
	}
	cout << endl;
	system("pause");
}