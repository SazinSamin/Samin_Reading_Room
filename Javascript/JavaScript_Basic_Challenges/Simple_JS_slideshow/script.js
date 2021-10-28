(function(){
        const imageLength = 5;
        let currentImage = 1;
        const getImage = document.getElementById('fileimage');

        document.getElementById('next').onclick = nextImage;
        document.getElementById('prev').onclick = prevImage;

        function nextImage() {
                //console.log("Function working...");
                if (++currentImage >= imageLength) {
                        currentImage = 1;
                }
                console.log(currentImage);
                getImage.setAttribute('src', 'image' + currentImage + '.jpg');
        }


        function prevImage() {
                if (--currentImage <= 0) {
                        currentImage = 5;
                }
                console.log(currentImage);
                getImage.setAttribute('src', 'image' + currentImage + '.jpg');
        }

        console.log(currentImage);
})()