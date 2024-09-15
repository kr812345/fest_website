import React from 'react';
import '../Team/Team.css';
import Team_details from '../../assets/team_details';

const Team = () => {
  return (
    <section className='team'>
        
      <div className="team_content">
        {/* <h5 className='subtitle'>Our Team</h5> */}
        <h2>Meet  <span className="highlight">Our Team</span></h2>
      </div>

      <div className="team_wrapper">
        {Team_details.map((team_detail, index) => (
          <article key={index} className="team_item">
            <img src={team_detail.s_image} alt={`Profile of ${team_detail.s_name}`} />
            <h2>{team_detail.s_name}</h2>
            <p>{team_detail.s_role}</p>
          </article>
        ))}
      </div>

    </section>
  );
}

export default Team;
