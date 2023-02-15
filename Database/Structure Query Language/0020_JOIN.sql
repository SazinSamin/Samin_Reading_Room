SELECT * FROM countries, regions WHERE countries.region_id = regions.region_id;


SELECT countries.name, languages.language FROM countries, country_languages, languages 
WHERE languages.language_id = country_languages.language_id AND country_languages.country_id = countries.country_id;


SELECT countries.name, languages.language FROM countries, country_languages, languages 
WHERE languages.language_id = country_languages.language_id 
AND country_languages.country_id = countries.country_id 
AND countries.name = "Bangladesh";
