(function(){
        'use strict';

        const details_button = document.querySelector('#details_form');
        // document.getElementById('destination_container').appendChild(noCard);


        details_button.addEventListener('submit', submissionHandler);

        function submissionHandler(evt) {
                // prevent default behaviour.
                evt.preventDefault();

                // retrive the info from the form
                let dName = evt.target.elements['name'].value;
                let dLocation = evt.target.elements['location'].value;
                let dPhoto = evt.target.elements['photo'].value;
                let dDescitpion = evt.target.elements['description'].value;
                /*console.log(dName);
                console.log(dLocation);
                console.log(dPhoto);
                console.log(dDescitpion);*/

                // clearing the form fields
                for (let i = 0; i < details_button.length; i++) {
                        console.log("Clearing the form ... ");
                        details_button.elements[i].value = "";
                }


                // console.log(`Destination container: ${destinationContainer}`);
                const getNewCard = createDestinationDetailsCard(dName, dLocation, dPhoto, dDescitpion);
                document.getElementById('destination_container').appendChild(getNewCard);

        }



        function createDestinationDetailsCard(name, location, photoUrl, description) {

                const card = document.createElement('div');
                card.className = "card";

                const cardBody = document.createElement('div');
                cardBody.className = "card_body";

                const img = document.createElement('img');
                img.setAttribute('alt', name);

                const defaulePhotoUrl = 'images/signpost.jpg';
                if (photoUrl.length > 0) {
                        img.setAttribute('src', photoUrl);
                }


                cardBody.appendChild(img);

                const cardTitle = document.createElement('h3');
                cardTitle.innerHTML = name;
                cardBody.appendChild(cardTitle);

                const cardSubtitle = document.createElement('h4');
                cardSubtitle.innerHTML = location;
                cardBody.appendChild(cardSubtitle);


                if (description.length != 0) {
                        const cardText = document.createElement('p');
                        cardText.innerHTML = description;
                        cardText.className = 'card_text';
                        cardBody.appendChild(cardText);
                }

                const cardDeleteBtn = document.createElement('button');
                cardDeleteBtn.innerHTML = 'Remove';

                cardDeleteBtn.addEventListener('click', function (evt) {
                        const card = evt.target.parentElement.parentElement;
                        card.remove();
                });

                cardBody.appendChild(cardDeleteBtn);

                card.appendChild(cardBody);

                return card;
        }


        function removeDestination(evt) {
                const card = evt.target.parentElement.parentElement;
                card.remove();
        }



        function noCard() {
                const noCardHeader = document.createElement('h2');
                noCardHeader.innerHTML = 'No Wish Element Yet';
                return noCardHeader;
        }


})();