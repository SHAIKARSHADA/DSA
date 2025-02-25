Class Solution {
    public: {
        
        // [5, 15, 18 , 9, 1, 59, 7] -> [5, 7, 18, 9, 1, 59, 15] -> [5, 7, 1, 9, 18, 59, 15] -> [1,7,5,9,18,59,15]
        int partition(vector<int> &arr, int low, int high) {
            int pivot = arr[low];
            int i = low;
            int j = high;
            if(i < j) {
                while(arr[i] <= pivot && i <= high-1 ) {
                    i++;
                }
                while(arr[j] > pivot && j >= low+1) {
                    j--;
                }
                if(i < j) swap(arr[i], arr[j]);
            }
            swap(arr[low],arr[j]);
            return j;
        }

        void qs(vector<int> &arr, int low, int high) {
            if(low < high) {
                int pIndex = partition(arr, low, high);
                qs(arr, low, pIndex-1);
                qs(arr, pIndex+1, high);
            }
        }

        vector<int> quickSort(vector<int> &arr) {
            qs(arr, 0, arr.size()-1)
            return arr;
        }
    }
}