#include <iostream>
#include <vector>

using namespace std;

// ��ѡ������
vector<int> SelectSort(vector<int> list){
	// ��Ҫ���������Сֵ�Ĵ���
	// Ҫע��һ�㣬��Ҫ���� N �������Ѿ����� N-1 �α������Ѿ�����������
	vector<int> result = list;
	for (int i = 0; i < result.size(); i++){
		// ����������Сֵ������
		int index = i;
		// ����������Сֵ������
		for (int j = i + 1; j < result.size(); j++){
			if (result[index] > result[j]){
				index = j;
			}
		}
		// ���ҵ��ĵ�i��С����ֵ���ڵ�i��λ����
		swap(result[i], result[index]);
		cout << "��" << i + 1<< "��:\t";
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
	result = SelectSort(test);
	cout << "�����" << endl;
	for (int i = 0; i < result.size(); i++){
		cout << result[i] << " ";
	}
	cout << endl;

	system("pause");
}