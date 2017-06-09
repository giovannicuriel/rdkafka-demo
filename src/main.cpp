#include <iostream>
#include <librdkafka/rdkafka.h>

int main(void) {
	rd_kafka_conf_res_t kf_result;
    rd_kafka_conf_t *conf;
    char errstr[512];

    conf = rd_kafka_conf_new();
    kf_result = rd_kafka_conf_set(conf, "compression.codec", "snappy", errstr, sizeof(errstr));
    kf_result = rd_kafka_conf_set(conf, "batch.num.messages", "100", errstr, sizeof(errstr));
    rd_kafka_t * kf_producer = rd_kafka_new(RD_KAFKA_PRODUCER, conf, errstr, 512);



}
