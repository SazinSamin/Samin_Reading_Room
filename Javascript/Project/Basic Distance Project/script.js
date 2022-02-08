(function(){
        'use strict';

        document.getElementById('convert').addEventListener('submit', function (evt) {
        evt.preventDefault();
        let distance = document.getElementById('distance').value;
        let distanceKm = parseFloat((distance * 1.609344)).toFixed(2);
        const answer = document.getElementById('answer');
        console.log(distanceKm);
        console.log(typeof (distanceKm));

        if (distanceKm != "NaN") {
                answer.innerHTML = `<h2>${distance} miles: ${distanceKm}</h2>`;
        } else {
                answer.innerHTML = `<h2>Error in convertion !</h2>`;
        }
        });
})()