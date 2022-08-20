function loadData() {
        // create the XMLHttp instance
        const xhr = new XMLHttpRequest();

        // executing element after response comes
        xhr.onload = () => {
                document.getElementById('weather').innerHTML = xhr.responseText;
        };

        // put request method & url
        xhr.open('GET', 'http://virusbase.herokuapp.com');
        // make request
        xhr.send();
};
