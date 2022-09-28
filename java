class highArray{
    private long[] a;
    private int nele;
    public int i;
    public highArray(int max){
        a= new long[max];
        nele=0;
    }
    public boolean find(long searchKey){
        for(i=0;i<nele;i++){
            if(a[i]==searchKey)
                break;
            }
            if(i==nele)
                return false;
            
            else
                return true;
            
        
    }//end of find class
    public void insert(long value){
        a[nele]=value;
        nele++;
    }
    public boolean delete(long deleteKey){
        for(i=0;i<nele;i++){
            if(deleteKey==a[i])
                break;
            }
            if(i==nele)
                return false;
                
        else{
            for(int k=i;k<nele;k++)
            a[k]=a[k+1];
            nele--;
               return true;
        }
    }
    public void display(){
        for(i=0;i<nele;i++)
            System.out.print(a[i]+" ");
            System.out.println(" ");
    }
}//end of higharray
class highArrayApp{
    public static void main(String[] args){
        highArray arr;
        arr= new highArray(100);
        arr.insert(77);
        arr.insert(99);
        arr.insert(44);
        arr.insert(55);
        arr.insert(22);
        arr.insert(88);
        arr.insert(11);
        arr.insert(00);
        arr.insert(66);
        arr.insert(33);

        System.out.println("Displaying the inserted elements:");
        arr.display();
        int searchKey= 35;
        if(arr.find(searchKey))
            System.out.print("found"+searchKey);
        
        else
            System.out.println(" \n"+searchKey+"not found!");
        
        arr.delete(00);
        arr.delete(55);
        arr.delete(99);
        System.out.println("Displaying the elements after deleting:");
        arr.display();
    }
}
