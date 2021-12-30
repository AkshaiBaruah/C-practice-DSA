fun main(){
    // write a program to print the sum of first 'n' natural numbers(n can be your choice)
    //print1toN(16)
    //sum(2)
    println(sum(6))
}
fun sum(n : Int) : Int{
    var sum = 0
    for(i in 1..n){
        sum = sum + i
    }
    //println("the sum of first $n natural numbers is : $sum")
    return sum
}
void printList(Node * head){
    
}
int main(){
    return 0;
}