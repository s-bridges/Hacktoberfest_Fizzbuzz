fn main() {
    for i in 1..=100 {
        if i % 3 == 0 && i % 5 == 0 {
            print!("Spider ");
        } else if i % 5 == 0 {
            print!("Ghost ");
        } else if i % 3 == 0 {
            print!("Rat ");
        } else {
            print!("{} ",i);
        }
    }
}