
//this code is for findong mean of median of two sorted arrays.
#include<stdio.h>
double findMedianSortedArrays(int *,int ,int *,int);
int main(){
	int nums1[10],nums2[10],nums1Size=0,nums2Size=0,i=0;
	double ultimateTarget=0;
	printf("Enter First array size\n");
	scanf("%d",&nums1Size);
	printf("Enter Second array size\n");
	scanf("%d",&nums2Size);
	printf("Enter nums1 array elements\n");
	for(i=1;i<=nums1Size;i++){
		scanf("%d",&nums1[i]);
	}
	printf("Enter nums2 array elements\n");
	for(i=1;i<=nums2Size;i++){
		scanf("%d",&nums2[i]);
	}
	ultimateTarget=findMedianSortedArrays(nums1,nums1Size,nums2,nums2Size);
	printf("ultimate median is:%lf\n",ultimateTarget/2);
	return 0;
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
	float target=0,target1=0;
    if(nums1Size>0&&nums2Size>0){
    	if(nums1Size%2==0){
    	target=(nums1[(nums1Size/2)]+nums1[(nums1Size/2)+1])/2;
		}
		else{
			target=nums1[(nums1Size/2)+1];
		}
		printf("%f",target);
		if(nums2Size%2==0){
    	target1=(nums2[(nums2Size/2)]+nums2[(nums2Size/2)+1])/2;
		}
		else{
			target1=nums2[(nums2Size/2)+1];
		}
		printf("%f",target1);

    }
    return target+target1;

}
