fn main() {
    let mut a:u8 = 1;
    let mut b:u8 = 1;
 
    let mut x:u8;

 
    x = !(a | b);
    println!("{:08b}", x);

    a = 0;
    b = 0;
    x = !(a | b);
    println!("{:08b}", x);

    a = 1;
    x = !(a | b);
    println!("{:08b}", x);

    b = 1;
    a = 0;
    x = !(a | b);
    println!("{:08b}", x);

 
 }