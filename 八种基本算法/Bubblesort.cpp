#include <iostream>
#include <vector>
 
using namespace std;
 
vector<int> bubbleSort(vector<int> list){
	vector<int> result;
	if (list.empty()){
		return result;
	}
 
	result = list;
	int temp;
	// Ҫ�����Ĵ���
	for (int i = 0; i < result.size() - 1; ++i){
		cout << "��" << i + 1 << "������:" << endl;;
		// �Ӻ���ǰ���εıȽ������������Ĵ�С
		for (int j = 0; j < result.size() - 1; j++){
			// ��������Ԫ��С���򽻻����ǵ�λ��
			if (result[j + 1] < result[j]){
				temp = result[j + 1];
				result[j + 1] = result[j];
				result[j] = temp;
			}
			cout << "������:";
			for (int s = 0; s < result.size(); s++){
				cout << result[s] << " ";
			}
			cout << endl;
		}
		cout << "������:";
		for (int s = 0; s < result.size(); s++){
			cout << result[s] << " ";
		}
		cout << endl;
	}
	return result;
}
 
void main(){
	int arr[] = { 6, 4, 8, 1, 2, 3, 9 };
	vector<int> test(arr, arr + sizeof(arr) / sizeof(arr[0]));
	cout << "����ǰ" << endl;
	for (int i = 0; i < test.size(); i++){
		cout << test[i] << " ";
	}
	cout << endl;
	vector<int> result;
	result = bubbleSort(test);
	cout << "�����" << endl;
	for (int i = 0; i < result.size(); i++){
		cout << result[i] << " ";
	}
	cout << endl;
	system("pause");
}