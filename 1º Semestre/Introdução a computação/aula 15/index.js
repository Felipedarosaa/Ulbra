var carros = ['fiat', 'gm', 'ttt'];

console.log(carros);
console.log(carros[1]);

for(i=0; i<carros.length; i++) {
    console.log('carro é ' + carros[i]);
}


// tabuada // 

tabuadaDo(5);
// 5 * 0 = 0
// 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
// 5 * 4 = 20
// 5 * 5 = 25
// 5 * 6 = 30
// 5 * 7 = 35
// 5 * 8 = 40
// 5 * 9 = 45
// 5 * 10 = 50
function tabuadaDo(numero) {
    for(i=0; i<=10; i++) {
        console.log(`${numero} x ${i} = ${numero * i}`)
    }
}

//

var phones = '(51) 997483061, (51) 985097709';
var arrayPhones = phones.split(',');

console.log(arrayPhones);

var binarios = 100110011;
var arrayBinarios = binarios.split('');
console.log(arrayBinarios);

for(i=0; i<arrayBinarios.length; i++) {
    console.log(arrayBinaio [i]);
}
