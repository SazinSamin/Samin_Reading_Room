function searchLocation(location) {
        return new Promise((resolve, rejected) => {
                if(location == "USA" ) {
                        resolve("Location found");
                } else {
                        rejected("Location can't found");
                }
        })
}


function accessLocation(location) {
        return new Promise((resove, rejected) => {
                if(location == "Location found") {
                        resove("Location acess granted");
                } else {
                        rejected("Location access rejected");
                }
        })
}

// promise code
// searchLocation("SA").then(searchLocationResult => {
//         console.log(searchLocationResult)
//         return accessLocation(searchLocationResult);
// }).then(accessLocationResult => {
//         console.log(accessLocationResult);
// }).catch(console.log);


// async await code
async function locationResult () {
        const searchLocationResult = await searchLocation("USA");
        const accessLocationResult = await accessLocation(searchLocationResult);
        console.log(accessLocationResult);
}

locationResult();
