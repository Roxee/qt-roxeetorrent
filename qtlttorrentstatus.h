#ifndef QTLTTORRENTSTATUS_H
#define QTLTTORRENTSTATUS_H

#include <QObject>

class QtLtTorrentStatus : public QObject
{
    Q_OBJECT
public:
    explicit QtLtTorrentStatus(QObject *parent = 0);

/*
    Q_PROPERTY(int state READ state)
    Q_PROPERTY(bool paused READ paused)
    Q_PROPERTY(float progress READ progress)
    Q_PROPERTY(int progressPpm READ progress_ppm)

    Q_PROPERTY(QString error READ error)

    Q_PROPERTY(qint64 nextAnnounce READ next_announce)
    Q_PROPERTY(qint64 announceInterval READ announce_interval)

    Q_PROPERTY(QString currentTracker READ current_tracker)

    Q_PROPERTY(qint64 totalDownload READ total_download)
    Q_PROPERTY(qint64 totalUpload READ total_upload)

    Q_PROPERTY(qint64 totalPayloadDownload READ total_payload_download)
    Q_PROPERTY(qint64 totalPayloadUpload READ total_payload_upload)

    Q_PROPERTY(qint64 totalFailedBytes READ total_failed_bytes)
    Q_PROPERTY(qint64 totalRedundantBytes READ total_redundant_bytes)

    Q_PROPERTY(int downloadRate READ download_rate)
    Q_PROPERTY(int updloadRate READ upload_rate)

    Q_PROPERTY(int downloadPayloadRate READ download_payload_rate)
    Q_PROPERTY(int updloadPayloadRate READ upload_payload_rate)

    Q_PROPERTY(int numPeers READ num_peers)
    Q_PROPERTY(int numSeeds READ num_seeds)
    Q_PROPERTY(int numComplete READ num_complete)
    Q_PROPERTY(int numIncomplete READ num_incomplete)

    Q_PROPERTY(int listSeeds READ list_seeds)
    Q_PROPERTY(int listPeers READ list_peers)

    Q_PROPERTY(int connectCandidates READ connect_candidates)

    Q_PROPERTY(int activeTime READ active_time)
    Q_PROPERTY(int finishedTime READ finished_time)
    Q_PROPERTY(int seedingTime READ seeding_time)
    Q_PROPERTY(int seedRank READ seed_rank)
    Q_PROPERTY(int lastScrape READ last_scrape)
*/

signals:
    
public slots:
    
};

#endif // QTLTTORRENTSTATUS_H

/*
struct torrent_status
{
        int num_uploads;
        int num_connections;
        int uploads_limit;
        int connections_limit;

        bitfield pieces;
        int num_pieces;

        size_type total_done;
        size_type total_wanted_done;
        size_type total_wanted;

        int distributed_full_copies;
        int distributed_fraction;

        float distributed_copies;

        int block_size;

        storage_mode_t storage_mode;

        int up_bandwidth_queue;
        int down_bandwidth_queue;

        size_type all_time_upload;
        size_type all_time_download;


        bool has_incoming;

        int sparse_regions;

        bool seed_mode;

        bool upload_mode;

        int priority;
};
*/