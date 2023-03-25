(define (problem couples-problem)
    (:domain couples)
    (:objects h1 - man
        h2 - man
        h3 - man
        w1 - woman
        w2 - woman
        w3 - woman
        left - bank
        right - bank
    )
    (:init (husband h1)
        (husband h2)
        (husband h3)
        (wife w1)
        (wife w2)
        (wife w3)
        (couple h1 w1)
        (couple h2 w2)
        (couple h3 w3)
        (at h1 left)
        (at h2 left)
        (at h3 left)
        (at w1 left)
        (at w2 left)
        (at w3 left)
        (boat-at left)
    )
    (:goal (and (at h1 right)
        (at h2 right)
        (at h3 right)
        (at w1 right)
        (at w2 right)
        (at w3 right)
        (boat-at right)
        )
    )
)