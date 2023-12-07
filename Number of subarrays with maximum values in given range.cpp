class Solution{

    public:

    long countSubarrays(int a[], int n, int L, int R)

    {

        long count =0;

        long size =0;

        //counting the cases where the maximum element is smaller than or equal to R

        for(int i =0;i< n;i++){

            if(a[i] <=R){

                while(a[i] <=R and i < n){

                    size++;

                    i++;

                }

            }

            count+=(size*(size + 1))/2;

            if(a[i] > R){

                size =0;

            }

        }

        //removing the cases where the maximum element is less than L 

        size =0;

        for(int i =0;i< n;i++){

            if(a[i] < L){

                while(a[i] < L and i < n){

                    size++;

                    i++;

 

                } 

       }
            count-=(size*(size + 1))/2;

            if(a[i] >=L){

                size =0;

            }

        }
        return count;

    }

};
