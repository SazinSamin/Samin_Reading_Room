(function(){
        'use strict';


        let currentImage = 0;
        const myphotos = ['image1.jpg', 'image2.jpg', 'image2.jpg', 'image3.jpg', 'image4.jpg', 'image5.jpg',];
        const content = document.getElementById('content');
        const nextBtn = document.getElementById('next');
        const prevBtn = document.getElementById('prev');

        prevBtn.


        nextBtn.addEventListener('click', function (evt) {
                evt.preventDefault();

                currentImage++;
                if (currentImage > myphotos.length - 1) { currentImage = 0; }
                swapImage();
        });


        prevBtn.addEventListener('click', function (evt) {
                evt.preventDefault();

                currentImage--;
                if (currentImage < 0) { currentImage = myphotos.length - 1; }
                swapImage();
        });


        function swapImage() {
                const newSlide = document.createElement('img');
                newSlide.src = `slides/${myphotos[currentImage]}`;
                newSlide.className = 'fadinimg';
                content.appendChild(newSlide);

                if (content.children.length > 2) {
                        content.removeChild(content.children[0]);
                }
        }

})()