function x(){
        function y() {
                
        }
}


// these code leads to error "Uncaught TypeError: Cannot read properties of undefined (reading 'y')"
// why I can't access a function like this.
console.log(x().y());
