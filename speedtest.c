#include <stdio.h>
#include <curl/curl.h>
#include <time.h>

size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream) {
    return size * nmemb;
}

int main() {
    CURL *curl;
    CURLcode res;
    const char *url = "http://speedtest.tele2.net/1MB.zip";
    double download_speed;

    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);

        clock_t start = clock();
        res = curl_easy_perform(curl);
        clock_t end = clock();

        if(res == CURLE_OK) {
            double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
            curl_easy_getinfo(curl, CURLINFO_SPEED_DOWNLOAD, &download_speed);
            printf("Download Speed: %.2f Mbps\n", (download_speed * 8) / 1e6);
            printf("Time Taken: %.2f seconds\n", time_taken);
        } else {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }

        curl_easy_cleanup(curl);
    }
    return 0;
}
